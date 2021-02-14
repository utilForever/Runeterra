// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_GAME_CONFIG_HPP
#define RUNETERRA_GAME_CONFIG_HPP

#include <Runeterra/Enums/GameEnums.hpp>

namespace Runeterra
{
//!
//! \brief GameConfig struct.
//!
//! This struct holds all configuration values to create a new Game instance.
//!
struct GameConfig
{
    PlayerType startPlayer = PlayerType::Random;

    bool skipMulligan = false;
    bool autoRun = true;
};
}  // namespace Runeterra

#endif  // RUNETERRA_GAME_CONFIG_HPP