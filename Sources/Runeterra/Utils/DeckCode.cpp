// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Commons/Constants.hpp>
#include <Runeterra/Commons/Utils.hpp>
#include <Runeterra/Utils/DeckCode.hpp>

#include <cppcodec/base32_rfc4648.hpp>

#include <stdexcept>
#include <vector>

namespace Runeterra
{
std::vector<std::string> DeckCode::Decode(const std::string& deckCode)
{
    std::vector<std::string> deck;
    deck.reserve(START_DECK_SIZE);

    // Fix padding and decode
    const std::size_t missingPaddingLen =
        (deckCode.size() / 8 + 1) * 8 - deckCode.size();
    const std::string missingPadding =
        std::string{ static_cast<char>(missingPaddingLen % 8), '=' };
    const std::string encodedWithPadding =
        missingPadding.empty() ? deckCode : deckCode + missingPadding;
    std::vector<unsigned char> base32Decoded =
        cppcodec::base32_rfc4648::decode(encodedWithPadding);

    int version = GetNextVarInt(&base32Decoded);
    version = version & 0xf;
    if (version > MAX_KNOWN_VERSION)
    {
        const std::string msg =
            std::string{ "Invalid version: " }.append(std::to_string(version));
        throw std::runtime_error{ msg };
    }

    // References: https://github.com/RiotGames/LoRDeckCodes#process
    DecodeGroup(&base32Decoded, deck, 3);
    DecodeGroup(&base32Decoded, deck, 2);
    DecodeGroup(&base32Decoded, deck, 1);

    return deck;
}

void DeckCode::DecodeGroup(std::vector<uint8_t>* cardStream,
                           std::vector<std::string>& deck, int amount)
{
    const int setRegions = GetNextVarInt(cardStream);
    for (int i = 0; i < setRegions; i++)
    {
        const int numRegionCards = GetNextVarInt(cardStream);
        std::string set = std::to_string(GetNextVarInt(cardStream));
        std::string region =
            RegionToString(static_cast<Region>(GetNextVarInt(cardStream)));

        if (set.size() < 2)
        {
            set.insert(set.begin(), 2 - set.size(), '0');
        }

        for (int j = 0; j < numRegionCards; j++)
        {
            std::string cardNum = std::to_string(GetNextVarInt(cardStream));
            if (cardNum.size() < 3)
            {
                cardNum.insert(cardNum.begin(), 3 - cardNum.size(), '0');
            }

            const std::string cardCode =
                std::string{ set }.append(region).append(cardNum);

            for (int k = 0; k < amount; ++k)
            {
                deck.emplace_back(cardCode);
            }
        }
    }
}
}  // namespace Runeterra