// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Cards/Cards.hpp>
#include <Runeterra/Commons/Constants.hpp>
#include <Runeterra/Commons/Utils.hpp>
#include <Runeterra/Utils/DeckCode.hpp>

#include <cppcodec/base32_rfc4648.hpp>

#include <stdexcept>
#include <vector>

namespace Runeterra
{
Deck DeckCode::Decode(const std::string& deckCode)
{
    Deck deck;

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
        std::string msg = "Invalid version: " + version;
        throw std::runtime_error{ msg };
    }

    std::vector<std::vector<Card>> cardGroups;
    cardGroups.emplace_back(DecodeGroup(&base32Decoded));
    cardGroups.emplace_back(DecodeGroup(&base32Decoded));
    cardGroups.emplace_back(DecodeGroup(&base32Decoded));

    return deck;
}

std::vector<Card> DeckCode::DecodeGroup(std::vector<uint8_t>* cardStream)
{
    std::vector<Card> groupCards;

    const int setFactions = GetNextVarInt(cardStream);
    for (int i = 0; i < setFactions; i++)
    {
        const int numFactionCards = GetNextVarInt(cardStream);
        std::string set = std::to_string(GetNextVarInt(cardStream));
        std::string region =
            RegionToString(static_cast<Region>(GetNextVarInt(cardStream)));

        for (int j = 0; j < numFactionCards; j++)
        {
            std::string cardNum = std::to_string(GetNextVarInt(cardStream));
            std::string cardCode = set.append(region).append(cardNum);

            std::optional<Card> card =
                Cards::GetInstance().FindCardByCode(cardCode);
            if (card.has_value())
            {
                groupCards.emplace_back();
            }
        }
    }

    return groupCards;
}
}  // namespace Runeterra