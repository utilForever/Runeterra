// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Commons/Tags.hpp>
#include <Runeterra/Components/Deck.hpp>
#include <Runeterra/Components/Name.hpp>
#include <Runeterra/Core/Engine.hpp>
#include <Runeterra/Loaders/CardLoader.hpp>
#include <Runeterra/Components/CardCode.hpp>

using namespace entt::literals;

namespace Runeterra
{
Engine::Engine()
{
    LoadCardData();
}

int Engine::NumAllCards()
{
    const auto view = m_registry.view<CardCode>();
    return static_cast<int>(view.size());
}

std::optional<std::string> Engine::FindCardCodeByName(
    std::string_view&& nameToFind)
{
    const auto view = m_registry.view<CardCode, Name>();

    for (auto [entity, cardCode, name] : view.each())
    {
        if (nameToFind == name.name)
        {
            return cardCode.cardCode;
        }
    }

    return std::nullopt;
}

void Engine::LoadCardData()
{
    CardLoader::Load(m_registry);
}
}  // namespace Runeterra