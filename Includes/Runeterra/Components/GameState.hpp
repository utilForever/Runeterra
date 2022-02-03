// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong, Woojin Kim
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_GAME_HPP
#define RUNETERRA_GAME_HPP

namespace Runeterra
{
//! \brief An enumerator for identifying the play state.
enum class PlayState
{
    INVALID,
    PLAYING,
    PLAYER1_WON,
    PLAYER2_WON,
    TIED,
    CONCEDED
};

//!
//! \brief GameState struct.
//!
//! This struct stores game states.
//!
struct GameState
{
    PlayState state;
};
}  // namespace Runeterra

#endif  // RUNETERRA_GAME_HPP
