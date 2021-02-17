// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_GAME_ENUMS_HPP
#define RUNETERRA_GAME_ENUMS_HPP

namespace Runeterra
{
//! \brief An enumerator for identifying the player.
enum class PlayerType
{
    Random,   //!< The random player.
    Player1,  //!< The first player.
    Player2,  //!< The second player.
};

//! \brief An enumerator for indicating the game step.
enum class Step
{
    BeginFirst,
    BeginShuffle,
    BeginDraw,
    BeginMulligan,
    MainBegin,
    MainReady,
    MainStartTriggers,
    MainResource,
    MainDraw,
    MainStart,
    MainAction,
    MainEnd,
    MainCleanUp,
    MainNext,
    FinalWrapUp,
    FinalGameOver,
};
}  // namespace Runeterra

#endif  // RUNETERRA_GAME_ENUMS_HPP
