// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong, Woojin Kim
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <doctest.h>

#include <Runeterra/Commons/Constants.hpp>
#include <Runeterra/Helpers/DeckCodeHelpers.hpp>
#include <Runeterra/Systems/Game.hpp>

#include <iostream>

using namespace Runeterra;

TEST_CASE("[Game] - CanStartGame")
{
    const std::vector<std::string> deck =
        DeckCode::Decode("CEBAIAIFB4WDANQIAEAQGDAUDAQSIJZUAIAQCBIFAEAQCBAA");

    Game game1;
    game1.CreatePlayers({}, {});
    CHECK_EQ(game1.CanStartGame(), false);

    Game game2;
    game2.CreatePlayers(deck, deck);
    CHECK_EQ(game2.CanStartGame(), true);
}

TEST_CASE("[Game] - GetAllCards")
{
    Game game;
    CHECK_EQ(game.NumAllCards(), NUM_ALL_CARDS);
}

TEST_CASE("[Game] - FindCardCodeByName")
{
    Game game;

    auto code1 = game.FindCardCodeByName("The Ruination");
    CHECK_EQ(code1.has_value(), true);
    CHECK_EQ(code1.value(), "01SI015");

    auto code2 = game.FindCardCodeByName("Hello, World");
    CHECK_EQ(code2.has_value(), false);
}