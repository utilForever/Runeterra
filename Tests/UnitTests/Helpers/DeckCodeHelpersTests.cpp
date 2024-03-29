// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong, Woojin Kim
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <doctest.h>

#include <Runeterra/Helpers/DeckCodeHelpers.hpp>

#include <algorithm>

using namespace Runeterra;

TEST_CASE("[DeckCode] - Decode")
{
    std::vector<std::string> deck1 =
        DeckCode::Decode("CEBAIAIFB4WDANQIAEAQGDAUDAQSIJZUAIAQCBIFAEAQCBAA");
    CHECK_EQ(std::count(deck1.begin(), deck1.end(), "01SI015"), 3);
    CHECK_EQ(std::count(deck1.begin(), deck1.end(), "01SI044"), 3);
    CHECK_EQ(std::count(deck1.begin(), deck1.end(), "01SI048"), 3);
    CHECK_EQ(std::count(deck1.begin(), deck1.end(), "01SI054"), 3);
    CHECK_EQ(std::count(deck1.begin(), deck1.end(), "01FR003"), 3);
    CHECK_EQ(std::count(deck1.begin(), deck1.end(), "01FR012"), 3);
    CHECK_EQ(std::count(deck1.begin(), deck1.end(), "01FR020"), 3);
    CHECK_EQ(std::count(deck1.begin(), deck1.end(), "01FR024"), 3);
    CHECK_EQ(std::count(deck1.begin(), deck1.end(), "01FR033"), 3);
    CHECK_EQ(std::count(deck1.begin(), deck1.end(), "01FR036"), 3);
    CHECK_EQ(std::count(deck1.begin(), deck1.end(), "01FR039"), 3);
    CHECK_EQ(std::count(deck1.begin(), deck1.end(), "01FR052"), 3);
    CHECK_EQ(std::count(deck1.begin(), deck1.end(), "01SI005"), 2);
    CHECK_EQ(std::count(deck1.begin(), deck1.end(), "01FR004"), 2);

    std::vector<std::string> deck2 = DeckCode::Decode(
        "CEBAKAIDBUHROGZOAYAQKAJEE4VTENIBAIAQGFRGAIAQCAYUAIAQKFBR");
    CHECK_EQ(std::count(deck2.begin(), deck2.end(), "01NX013"), 3);
    CHECK_EQ(std::count(deck2.begin(), deck2.end(), "01NX015"), 3);
    CHECK_EQ(std::count(deck2.begin(), deck2.end(), "01NX023"), 3);
    CHECK_EQ(std::count(deck2.begin(), deck2.end(), "01NX027"), 3);
    CHECK_EQ(std::count(deck2.begin(), deck2.end(), "01NX046"), 3);
    CHECK_EQ(std::count(deck2.begin(), deck2.end(), "01SI001"), 3);
    CHECK_EQ(std::count(deck2.begin(), deck2.end(), "01SI036"), 3);
    CHECK_EQ(std::count(deck2.begin(), deck2.end(), "01SI039"), 3);
    CHECK_EQ(std::count(deck2.begin(), deck2.end(), "01SI043"), 3);
    CHECK_EQ(std::count(deck2.begin(), deck2.end(), "01SI050"), 3);
    CHECK_EQ(std::count(deck2.begin(), deck2.end(), "01NX022"), 2);
    CHECK_EQ(std::count(deck2.begin(), deck2.end(), "01NX038"), 2);
    CHECK_EQ(std::count(deck2.begin(), deck2.end(), "01NX020"), 1);
    CHECK_EQ(std::count(deck2.begin(), deck2.end(), "01SI020"), 1);
    CHECK_EQ(std::count(deck2.begin(), deck2.end(), "01SI049"), 1);

    std::vector<std::string> deck3 =
        DeckCode::Decode("CEAQSAIDBAGA4EA2D4QSMNIBAUAQGBARDAUSWAIDAEBQWJBK");
    CHECK_EQ(std::count(deck3.begin(), deck3.end(), "01NX008"), 3);
    CHECK_EQ(std::count(deck3.begin(), deck3.end(), "01NX012"), 3);
    CHECK_EQ(std::count(deck3.begin(), deck3.end(), "01NX014"), 3);
    CHECK_EQ(std::count(deck3.begin(), deck3.end(), "01NX016"), 3);
    CHECK_EQ(std::count(deck3.begin(), deck3.end(), "01NX026"), 3);
    CHECK_EQ(std::count(deck3.begin(), deck3.end(), "01NX031"), 3);
    CHECK_EQ(std::count(deck3.begin(), deck3.end(), "01NX033"), 3);
    CHECK_EQ(std::count(deck3.begin(), deck3.end(), "01NX038"), 3);
    CHECK_EQ(std::count(deck3.begin(), deck3.end(), "01NX053"), 3);
    CHECK_EQ(std::count(deck3.begin(), deck3.end(), "01NX004"), 2);
    CHECK_EQ(std::count(deck3.begin(), deck3.end(), "01NX017"), 2);
    CHECK_EQ(std::count(deck3.begin(), deck3.end(), "01NX024"), 2);
    CHECK_EQ(std::count(deck3.begin(), deck3.end(), "01NX041"), 2);
    CHECK_EQ(std::count(deck3.begin(), deck3.end(), "01NX043"), 2);
    CHECK_EQ(std::count(deck3.begin(), deck3.end(), "01NX011"), 1);
    CHECK_EQ(std::count(deck3.begin(), deck3.end(), "01NX036"), 1);
    CHECK_EQ(std::count(deck3.begin(), deck3.end(), "01NX042"), 1);
}