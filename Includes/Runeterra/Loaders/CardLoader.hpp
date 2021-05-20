// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_CARD_LOADER_HPP
#define RUNETERRA_CARD_LOADER_HPP

#include <entt/entt.hpp>

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
    //! \param registry A registry of the entity-component system.
    static void Load(entt::registry& registry);

 private:
    //! Internal method of Load().
    //! \param registry A registry of the entity-component system.
    //! \param stream An input file stream to read data.
    static void LoadInternal(entt::registry& registry, std::ifstream&& stream);
};
}  // namespace Runeterra

#endif  // RUNETERRA_CARD_LOADER_HPP
