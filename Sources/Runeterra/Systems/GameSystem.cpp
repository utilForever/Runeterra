// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong, Woojin Kim
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Commons/Tags.hpp>
#include <Runeterra/Components/Nexus.hpp>
#include <Runeterra/Systems/GameSystem.hpp>

namespace Runeterra
{
void UpdateGameSystem(entt::registry& registry)
{
    for (auto& player : registry.view<Tag::Player>())
    {
        if (auto& nexus = registry.get<Nexus>(player); nexus.health <= 0)
        {
        }
    }
}
}  // namespace Runeterra