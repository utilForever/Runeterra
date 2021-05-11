// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <doctest.h>

#include <Runeterra/Utils/DeckCode.hpp>

using namespace Runeterra;

//TEST_CASE("[DeckCode] - Decode")
//{
//    Deck deck1 =
//        DeckCode::Decode("CEBAIAIFB4WDANQIAEAQGDAUDAQSIJZUAIAQCBIFAEAQCBAA");
//    CHECK_EQ(deck1.GetCardCount("01SI015"), 3);
//    CHECK_EQ(deck1.GetCardCount("01SI044"), 3);
//    CHECK_EQ(deck1.GetCardCount("01SI048"), 3);
//    CHECK_EQ(deck1.GetCardCount("01SI054"), 3);
//    CHECK_EQ(deck1.GetCardCount("01FR003"), 3);
//    CHECK_EQ(deck1.GetCardCount("01FR012"), 3);
//    CHECK_EQ(deck1.GetCardCount("01FR020"), 3);
//    CHECK_EQ(deck1.GetCardCount("01FR024"), 3);
//    CHECK_EQ(deck1.GetCardCount("01FR033"), 3);
//    CHECK_EQ(deck1.GetCardCount("01FR036"), 3);
//    CHECK_EQ(deck1.GetCardCount("01FR039"), 3);
//    CHECK_EQ(deck1.GetCardCount("01FR052"), 3);
//    CHECK_EQ(deck1.GetCardCount("01SI005"), 2);
//    CHECK_EQ(deck1.GetCardCount("01FR004"), 2);
//
//    Deck deck2 = DeckCode::Decode(
//        "CEBAKAIDBUHROGZOAYAQKAJEE4VTENIBAIAQGFRGAIAQCAYUAIAQKFBR");
//    CHECK_EQ(deck2.GetCardCount("01NX013"), 3);
//    CHECK_EQ(deck2.GetCardCount("01NX015"), 3);
//    CHECK_EQ(deck2.GetCardCount("01NX023"), 3);
//    CHECK_EQ(deck2.GetCardCount("01NX027"), 3);
//    CHECK_EQ(deck2.GetCardCount("01NX046"), 3);
//    CHECK_EQ(deck2.GetCardCount("01SI001"), 3);
//    CHECK_EQ(deck2.GetCardCount("01SI036"), 3);
//    CHECK_EQ(deck2.GetCardCount("01SI039"), 3);
//    CHECK_EQ(deck2.GetCardCount("01SI043"), 3);
//    CHECK_EQ(deck2.GetCardCount("01SI050"), 3);
//    CHECK_EQ(deck2.GetCardCount("01NX022"), 2);
//    CHECK_EQ(deck2.GetCardCount("01NX038"), 2);
//    CHECK_EQ(deck2.GetCardCount("01NX020"), 1);
//    CHECK_EQ(deck2.GetCardCount("01SI020"), 1);
//    CHECK_EQ(deck2.GetCardCount("01SI049"), 1);
//
//    Deck deck3 =
//        DeckCode::Decode("CEAQSAIDBAGA4EA2D4QSMNIBAUAQGBARDAUSWAIDAEBQWJBK");
//    CHECK_EQ(deck3.GetCardCount("01NX008"), 3);
//    CHECK_EQ(deck3.GetCardCount("01NX012"), 3);
//    CHECK_EQ(deck3.GetCardCount("01NX014"), 3);
//    CHECK_EQ(deck3.GetCardCount("01NX016"), 3);
//    CHECK_EQ(deck3.GetCardCount("01NX026"), 3);
//    CHECK_EQ(deck3.GetCardCount("01NX031"), 3);
//    CHECK_EQ(deck3.GetCardCount("01NX033"), 3);
//    CHECK_EQ(deck3.GetCardCount("01NX038"), 3);
//    CHECK_EQ(deck3.GetCardCount("01NX053"), 3);
//    CHECK_EQ(deck3.GetCardCount("01NX004"), 2);
//    CHECK_EQ(deck3.GetCardCount("01NX017"), 2);
//    CHECK_EQ(deck3.GetCardCount("01NX024"), 2);
//    CHECK_EQ(deck3.GetCardCount("01NX041"), 2);
//    CHECK_EQ(deck3.GetCardCount("01NX043"), 2);
//    CHECK_EQ(deck3.GetCardCount("01NX011"), 1);
//    CHECK_EQ(deck3.GetCardCount("01NX036"), 1);
//    CHECK_EQ(deck3.GetCardCount("01NX042"), 1);
//}