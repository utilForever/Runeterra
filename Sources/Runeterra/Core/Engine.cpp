// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Cards/Cards.hpp>
#include <Runeterra/Core/Engine.hpp>
#include <Runeterra/Loaders/CardLoader.hpp>

namespace Runeterra
{
Engine::Engine()
{
    LoadCardData();
}

int Engine::NumAllCards()
{
    return Cards::NumAllCards(m_registry);
}

void Engine::LoadCardData()
{
    CardLoader::Load(m_registry);
}
}  // namespace Runeterra