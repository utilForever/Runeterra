// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong, Woojin Kim
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_CARD_HELPERS_HPP
#define RUNETERRA_CARD_HELPERS_HPP

#include <entt/entt.hpp>

namespace Runeterra::Card
{
//! Loads card data from set{1|2|3}-en_us.json.
//! \param registry A registry of the entity-component system.
void LoadData(entt::registry& registry);
}  // namespace Runeterra::Card

#endif  // RUNETERRA_CARD_HELPERS_HPP
