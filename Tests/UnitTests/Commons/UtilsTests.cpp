// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong, Woojin Kim
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Commons/Macros.hpp>
#include <Runeterra/Commons/Utils.hpp>

#if defined(RUNETERRA_WINDOWS) || defined(RUNETERRA_LINUX)
#include <doctest.h>
#else
#include <doctest.h>
#include <iostream>
#endif

using namespace Runeterra;

TEST_CASE("[Utils] - RegionToString")
{
    CHECK_EQ(RegionToString(Region::Ionia), "IO");
    CHECK_EQ(RegionToString(Region::Invalid), "");
}