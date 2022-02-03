// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong, Woojin Kim
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_TAGS_HPP
#define RUNETERRA_TAGS_HPP

#include <entt/entt.hpp>

namespace Runeterra
{
namespace Tag
{
using namespace entt::literals;

using Game = entt::tag<"game"_hs>;
using Player = entt::tag<"player"_hs>;
}  // namespace Tag
}  // namespace Runeterra

#endif  // RUNETERRA_TAGS_HPP