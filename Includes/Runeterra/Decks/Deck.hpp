// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_DECK_HPP
#define RUNETERRA_DECK_HPP

#include <Runeterra/Cards/Card.hpp>

#include <tuple>

namespace Runeterra
{
//!
//! \brief Deck class.
//!
//! This class stores deck information that contains exactly 40 cards. Players
//! can only have 40 cards in their deck, of which 6 can be champion cards. All
//! cards have a max limit of 3 copies per deck.
//!
class Deck
{
 public:
    //! Add card(s) to deck with given \p card and \p amount.
    //! \param card The card to add to deck.
    //! \param amount The amount of card to add to deck.
    //! \return true if card(s) is added to deck successfully,
    //! and false otherwise.
    bool AddCard(Card card, int amount);

    //! Returns the count of \p cardCode.
    //! \param cardCode The card code to count.
    //! \return The count of \p cardCode.
    [[nodiscard]] int GetCardCount(std::string_view cardCode) const;

 private:
    std::vector<std::tuple<Card, int>> m_cards;
    int m_numCards = 0;
};
}  // namespace Runeterra

#endif  // RUNETERRA_CARD_HPP