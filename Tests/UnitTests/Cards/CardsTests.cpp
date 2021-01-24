// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <doctest.h>

#include <Runeterra/Cards/Cards.hpp>
#include <Runeterra/Commons/Constants.hpp>

using namespace Runeterra;

TEST_CASE("[Cards] - GetAllCards")
{
    const std::vector<std::unique_ptr<Card>>& cards =
        Cards::GetInstance().GetAllCards();

    CHECK_FALSE(cards.empty());
    CHECK_EQ(static_cast<int>(cards.size()), NUM_ALL_CARDS);
}

TEST_CASE("[Cards] - Keyword")
{
    const std::vector<std::unique_ptr<Card>>& cards =
        Cards::GetInstance().GetAllCards();

    for (const auto& card : cards)
    {
        for (auto& keyword : card->keywords)
        {
            CHECK_NE(keyword, Keyword::Invalid);
        }
    }
}