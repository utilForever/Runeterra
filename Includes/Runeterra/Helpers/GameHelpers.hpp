// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong, Woojin Kim
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_GAME_HELPERS_HPP
#define RUNETERRA_GAME_HELPERS_HPP

#include <entt/entt.hpp>

#include <string>
#include <vector>

namespace Runeterra::Game
{
//! Creates two players to play the game.
//! \param registry A registry that handles entities.
//! \param deck1 A list of cards to create the deck for player 1.
//! \param deck2 A list of cards to create the deck for player 2.
void CreatePlayers(entt::registry& registry,
                   const std::vector<std::string>& deck1,
                   const std::vector<std::string>& deck2);
}  // namespace Runeterra::Game

#endif  // RUNETERRA_GAME_HELPERS_HPP