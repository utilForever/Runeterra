// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_CARD_LOADER_HPP
#define RUNETERRA_CARD_LOADER_HPP

#include <Runeterra/Cards/Card.hpp>

#include <memory>
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
    static void Load(std::vector<std::unique_ptr<Card>>& cards);

 private:
    //! An internal method of Load().
    //! \param cards A data storage to store added cards with power.
    //! \param fileName The resource file name to load.
    static void LoadInternal(std::vector<std::unique_ptr<Card>>& cards,
                             const char* fileName);
};
}  // namespace Runeterra

#endif  // RUNETERRA_CARD_LOADER_HPP
