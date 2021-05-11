// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <doctest.h>

#include <Runeterra/Commons/Constants.hpp>
#include <Runeterra/Core/Engine.hpp>

using namespace Runeterra;

TEST_CASE("[Cards] - GetAllCards")
{
    Engine engine;
    CHECK_EQ(engine.NumAllCards(), NUM_ALL_CARDS);
}

//TEST_CASE("[Cards] - FindCardByCode")
//{
//    CHECK_EQ(Cards::GetInstance().FindCardByCode("01SI015").has_value(), true);
//    CHECK_EQ(Cards::GetInstance().FindCardByCode("HELLO12").has_value(), false);
//}