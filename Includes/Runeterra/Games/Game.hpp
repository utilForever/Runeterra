// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_GAME_HPP
#define RUNETERRA_GAME_HPP

#include <Runeterra/Games/GameConfig.hpp>
#include <Runeterra/Models/Player.hpp>
#include <Runeterra/Tasks/ITask.hpp>

#include <array>

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

    //! Starts the game.
    void Start();

    //! Process game until given step arriving.
    //! \param step The game step to process until arrival.
    void ProcessUntil(Step step);

    //! Process the specified task.
    //! \param player A player to run task.
    //! \param task The game task to execute.
    void Process(Player& player, ITask&& task) const;

    //! Gets the current round of the game.
    //! \return The current round of the game.
    int GetCurRound() const;

    //! Returns the player controlling the current round.
    //! \return The player controlling the current round.
    Player& GetCurPlayer();

    //! Returns the opponent player.
    //! \return The opponent player.
    Player& GetOpPlayer();

    //! Part of the game state.
    void BeginFirst();

    //! Part of the game state.
    void BeginShuffle();

    //! Part of the game state.
    void BeginDraw();

    //! Part of the game state.
    void BeginMulligan();

    //! Part of the game state.
    void MainBegin();

    //! Part of the game state.
    void MainReady();

    //! Part of the game state.
    void MainStartTriggers();

    //! Part of the game state.
    void MainResource();

    //! Part of the game state.
    void MainDraw();

    //! Part of the game state.
    void MainStart();

    //! Part of the game state.
    void MainAction();

    //! Part of the game state.
    void MainEnd();

    //! Part of the game state.
    void MainCleanUp();

    //! Part of the game state.
    void MainNext();

    //! Part of the game state.
    void FinalWrapUp();

    //! Part of the game state.
    void FinalGameOver();

    Step step = Step::BeginDraw;
    Step nextStep = Step::BeginDraw;

 private:
    GameConfig m_gameConfig;

    std::array<Player, 2> m_players;
    PlayerType m_curPlayer = PlayerType::Player1;

    int m_round = 0;
};
}  // namespace Runeterra

#endif  // RUNETERRA_GAME_HPP