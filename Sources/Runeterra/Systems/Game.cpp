// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Commons/Tags.hpp>
#include <Runeterra/Components/Deck.hpp>
#include <Runeterra/Components/Name.hpp>
#include <Runeterra/Helpers/CardHelpers.hpp>
#include <Runeterra/Systems/Game.hpp>

namespace Runeterra
{
Game::Game()
{
    Card::LoadData(m_registry);
}

void Game::CreatePlayers(const std::vector<std::string>& deck1,
                         const std::vector<std::string>& deck2)
{
    auto entity1 = m_registry.create();
    m_registry.emplace<Tag::Player>(entity1);
    m_registry.emplace<Name>(entity1, "Player 1");
    m_registry.emplace<Deck>(entity1, deck1);

    auto entity2 = m_registry.create();
    m_registry.emplace<Tag::Player>(entity2);
    m_registry.emplace<Name>(entity2, "Player 2");
    m_registry.emplace<Deck>(entity2, deck1);
}
}  // namespace Runeterra