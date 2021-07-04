// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Commons/Constants.hpp>
#include <Runeterra/Commons/Tags.hpp>
#include <Runeterra/Components/CardCode.hpp>
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

bool Game::CanStartGame() const
{
    if (const auto view = m_registry.view<Tag::Player>();
        view.size() != NUM_PLAYERS)
    {
        return false;
    }

    const auto view = m_registry.view<Tag::Player, Deck>();

    for (auto [entity, deck] : view.each())
    {
        if (deck.cards.size() != START_DECK_SIZE)
        {
            return false;
        }
    }

    return true;
}

int Game::NumAllCards()
{
    const auto view = m_registry.view<CardCode>();
    return static_cast<int>(view.size());
}
}  // namespace Runeterra