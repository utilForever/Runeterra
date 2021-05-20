// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_GAME_MANAGER_HPP
#define RUNETERRA_GAME_MANAGER_HPP

#include <Runeterra/Enums/GameEnums.hpp>

namespace Runeterra
{
class Game;

//!
//! \brief GameManager class.
//!
//! This class monitors game and invokes method when a state is changed.
//!
class GameManager
{
 public:
    //! Invokes method when a state is changed.
    //! \param game The game context.
    //! \param step The next step.
    static void ProcessNextStep(Game& game, Step step);
};
}  // namespace Runeterra

#endif  // RUNETERRA_GAME_MANAGER_HPP