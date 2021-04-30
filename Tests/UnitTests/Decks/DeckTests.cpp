// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <doctest.h>

#include <Runeterra/Cards/Cards.hpp>
#include <Runeterra/Decks/Deck.hpp>
#include <Runeterra/Utils/DeckCode.hpp>

using namespace Runeterra;

TEST_CASE("[Deck] - AddCard")
{
    Deck deck1;

    std::optional<Card> card1 = Cards::GetInstance().FindCardByCode("01SI053");
    CHECK(deck1.AddCard(card1.value(), 2));
    CHECK_FALSE(deck1.AddCard(card1.value(), 2));

    std::optional<Card> card2 = Cards::GetInstance().FindCardByCode("01SI038");
    CHECK_FALSE(deck1.AddCard(card2.value(), 4));
    CHECK(deck1.AddCard(card2.value(), 3));

    Deck deck2 =
        DeckCode::Decode("CEAQSAIDBAGA4EA2D4QSMNIBAUAQGBARDAUSWAIDAEBQWJBK");
    CHECK_FALSE(deck2.AddCard(card1.value(), 3));
}

TEST_CASE("[Deck] - GetCardCount")
{
    Deck deck;

    std::optional<Card> card1 = Cards::GetInstance().FindCardByCode("01SI053");
    deck.AddCard(card1.value(), 2);

    std::optional<Card> card2 = Cards::GetInstance().FindCardByCode("01SI038");
    deck.AddCard(card2.value(), 3);

    CHECK_EQ(deck.GetCardCount("01SI053"), 2);
    CHECK_EQ(deck.GetCardCount("01SI038"), 3);
    CHECK_EQ(deck.GetCardCount("01NX013"), 0);
}