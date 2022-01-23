// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong, Woojin Kim
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_GAME_SYSTEM_HPP
#define RUNETERRA_GAME_SYSTEM_HPP

#include <entt/entt.hpp>

namespace Runeterra
{
//! Updates game system.
//! \param registry A registry that handles entities.
void UpdateGameSystem(entt::registry& registry);
}  // namespace Runeterra

#endif  // RUNETERRA_GAME_SYSTEM_HPP