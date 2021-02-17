// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <doctest.h>

#include <Runeterra/Games/Game.hpp>
#include <Runeterra/Games/GameConfig.hpp>
#include <Runeterra/Tasks/PlayerTasks/EndRoundTask.hpp>

using namespace Runeterra;
using namespace PlayerTasks;

TEST_CASE("[Game] - GetPlayer")
{
    GameConfig config;
    config.startPlayer = PlayerType::Player1;
    config.skipMulligan = true;
    config.autoRun = false;

    Game game{ config };
    game.Start();
    game.ProcessUntil(Step::MainAction);

    Player& curPlayer = game.GetCurPlayer();
    Player& opPlayer = game.GetOpPlayer();

    CHECK_EQ(game.GetCurPlayer().GetType(), PlayerType::Player1);
    CHECK_EQ(game.GetOpPlayer().GetType(), PlayerType::Player2);

    game.Process(curPlayer, EndRoundTask());
    game.ProcessUntil(Step::MainAction);

    CHECK_EQ(game.GetCurPlayer().GetType(), PlayerType::Player2);
    CHECK_EQ(game.GetOpPlayer().GetType(), PlayerType::Player1);

    game.Process(opPlayer, EndRoundTask());
    game.ProcessUntil(Step::MainAction);

    CHECK_EQ(game.GetCurPlayer().GetType(), PlayerType::Player1);
    CHECK_EQ(game.GetOpPlayer().GetType(), PlayerType::Player2);
}

TEST_CASE("[Game] - Round")
{
    GameConfig config;
    config.startPlayer = PlayerType::Random;
    config.skipMulligan = true;
    config.autoRun = false;

    Game game{ config };
    game.Start();
    game.ProcessUntil(Step::MainAction);

    Player& curPlayer = game.GetCurPlayer();
    Player& opPlayer = game.GetOpPlayer();

    CHECK_EQ(game.GetCurRound(), 1);

    game.Process(curPlayer, EndRoundTask());
    game.ProcessUntil(Step::MainAction);

    CHECK_EQ(game.GetCurRound(), 2);

    game.Process(opPlayer, EndRoundTask());
    game.ProcessUntil(Step::MainAction);

    CHECK_EQ(game.GetCurRound(), 3);
}