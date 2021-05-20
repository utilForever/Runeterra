// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <doctest.h>

#include <Runeterra/Commons/Constants.hpp>
#include <Runeterra/Systems/Engine.hpp>
#include <Runeterra/Utils/DeckCode.hpp>

#include <iostream>

using namespace Runeterra;

TEST_CASE("[Engine] - CanStartGame")
{
    const std::vector<std::string> deck =
        DeckCode::Decode("CEBAIAIFB4WDANQIAEAQGDAUDAQSIJZUAIAQCBIFAEAQCBAA");

    Engine engine1;
    engine1.CreatePlayers({}, {});
    CHECK_EQ(engine1.CanStartGame(), false);

    Engine engine2;
    engine2.CreatePlayers(deck, deck);
    CHECK_EQ(engine2.CanStartGame(), true);
}

TEST_CASE("[Engine] - GetAllCards")
{
    Engine engine;
    CHECK_EQ(engine.NumAllCards(), NUM_ALL_CARDS);
}

TEST_CASE("[Engine] - FindCardCodeByName")
{
    Engine engine;

    auto code1 = engine.FindCardCodeByName("The Ruination");
    CHECK_EQ(code1.has_value(), true);
    CHECK_EQ(code1.value(), "01SI015");

    auto code2 = engine.FindCardCodeByName("Hello, World");
    CHECK_EQ(code2.has_value(), false);
}