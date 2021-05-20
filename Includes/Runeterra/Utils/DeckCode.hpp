// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_DECK_CODE_HPP
#define RUNETERRA_DECK_CODE_HPP

#include <string>
#include <vector>

namespace Runeterra
{
//!
//! \brief DeckCode class.
//!
//! This class encodes/decodes Legend of Runeterra decks to/from simple strings.
//!
class DeckCode
{
 public:
    //! Decodes a deck code and returns the deck that contains some cards.
    //! \param deckCode The deck code generated by Legends of Runeterra.
    //! \return A list of cards that is decoded.
    static std::vector<std::string> Decode(const std::string& deckCode);

 private:
    //! Decodes a group and returns a list of matched cards.
    //! \param cardStream A card stream for decoded base32 string.
    //! \param deck A deck instance to add card(s).
    //! \param amount The number of card(s) to add.
    static void DecodeGroup(std::vector<uint8_t>* cardStream,
                            std::vector<std::string>& deck, int amount);
};
}  // namespace Runeterra

#endif  // RUNETERRA_DECK_CODE_HPP