// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Cards/Cards.hpp>
#include <Runeterra/Components/CardCode.hpp>
#include <Runeterra/Loaders/CardLoader.hpp>

namespace Runeterra
{
int Cards::NumAllCards(entt::registry& registry)
{
    const auto view = registry.view<CardCode>();
    return static_cast<int>(view.size());
}
}  // namespace Runeterra