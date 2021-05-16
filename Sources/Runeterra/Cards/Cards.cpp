// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Cards/Cards.hpp>
#include <Runeterra/Components/CardCode.hpp>
#include <Runeterra/Components/Name.hpp>
#include <Runeterra/Loaders/CardLoader.hpp>

namespace Runeterra
{
int Cards::NumAllCards(entt::registry& registry)
{
    const auto view = registry.view<CardCode>();
    return static_cast<int>(view.size());
}

std::optional<std::string> Cards::FindCardCodeByName(
    entt::registry& registry, const std::string_view& nameToFind)
{
    const auto view = registry.view<CardCode, Name>();

    for (auto [entity, cardCode, name] : view.each())
    {
        if (nameToFind == name.name)
        {
            return cardCode.cardCode;
        }
    }

    return std::nullopt;
}
}  // namespace Runeterra