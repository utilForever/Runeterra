// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_GAME_HPP
#define RUNETERRA_GAME_HPP

#include <Runeterra/Games/GameConfig.hpp>

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
    //! Constructs game with given \p config.
    //! \param config The game config holds all configuration values.
    explicit Game(const GameConfig& config);

 private:
    GameConfig m_gameConfig;
};
}  // namespace Runeterra

#endif  // RUNETERRA_GAME_HPP