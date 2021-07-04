// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_GAME_HPP
#define RUNETERRA_GAME_HPP

#include <entt/entt.hpp>

#include <string>
#include <vector>

namespace Runeterra
{
//!
//! \brief Game class.
//!
//! This class stores Legends of Runeterra game states which consists of
//! information of both players.
//!
class Game
{
 public:
    //! Constructs new game and loads card data.
    Game();

    //! Creates two players to play the game.
    //! \param deck1 A list of cards to create the deck for player 1.
    //! \param deck2 A list of cards to create the deck for player 2.
    void CreatePlayers(const std::vector<std::string>& deck1,
                       const std::vector<std::string>& deck2);

 private:
    entt::registry m_registry;
};
}  // namespace Runeterra

#endif  // RUNETERRA_GAME_HPP