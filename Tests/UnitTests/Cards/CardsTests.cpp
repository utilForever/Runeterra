// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <doctest.h>

#include <Runeterra/Cards/Cards.hpp>
#include <Runeterra/Commons/Constants.hpp>

using namespace Runeterra;

TEST_CASE("[Cards] - GetAllCards")
{
    const std::vector<Card>& cards = Cards::GetInstance().GetAllCards();

    CHECK_FALSE(cards.empty());
    CHECK_EQ(static_cast<int>(cards.size()), NUM_ALL_CARDS);
}

TEST_CASE("[Cards] - Keyword")
{
    const std::vector<Card>& cards = Cards::GetInstance().GetAllCards();

    for (const auto& card : cards)
    {
        for (auto& keyword : card.keywords)
        {
            CHECK_NE(keyword, Keyword::Invalid);
        }
    }
}

TEST_CASE("[Cards] - FindCardByCode")
{
    CHECK_EQ(Cards::GetInstance().FindCardByCode("01SI015").has_value(), true);
    CHECK_EQ(Cards::GetInstance().FindCardByCode("HELLO12").has_value(), false);
}