// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_CARD_LOADER_HPP
#define RUNETERRA_CARD_LOADER_HPP

#include <Runeterra/Cards/Card.hpp>

#include <vector>

namespace Runeterra
{
//!
//! \brief CardLoader class.
//!
//! This class loads card data from set{1|2|3}-en_us.json.
//!
class CardLoader
{
 public:
    //! Loads card data from set{1|2|3}-en_us.json.
    //! \param cards A data storage to store added cards with power.
    static void Load(std::vector<Card>& cards);

 private:
    //! An internal method of Load().
    //! \param cards A data storage to store added cards with power.
    //! \param stream An input file stream to read data.
    static void LoadInternal(std::vector<Card>& cards, std::ifstream&& stream);
};
}  // namespace Runeterra

#endif  // RUNETERRA_CARD_LOADER_HPP
