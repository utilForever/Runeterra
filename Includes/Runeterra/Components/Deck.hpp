// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong, Woojin Kim
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_DECK_HPP
#define RUNETERRA_DECK_HPP

#include <string>
#include <vector>

namespace Runeterra
{
//!
//! \brief Deck struct.
//!
//! This class stores deck information that contains exactly 40 cards. Players
//! can only have 40 cards in their deck, of which 6 can be champion cards. All
//! cards have a max limit of 3 copies per deck.
//!
struct Deck
{
    std::vector<std::string> cards;
};
}  // namespace Runeterra

#endif  // RUNETERRA_DECK_HPP
