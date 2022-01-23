// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong, Woojin Kim
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Commons/Tags.hpp>
#include <Runeterra/Components/Deck.hpp>
#include <Runeterra/Components/Name.hpp>
#include <Runeterra/Helpers/GameHelpers.hpp>

namespace Runeterra::Game
{
void CreatePlayers(entt::registry& registry,
                   const std::vector<std::string>& deck1,
                   const std::vector<std::string>& deck2)
{
    auto entity1 = registry.create();
    registry.emplace<Tag::Player>(entity1);
    registry.emplace<Name>(entity1, "Player 1");
    registry.emplace<Deck>(entity1, deck1);

    auto entity2 = registry.create();
    registry.emplace<Tag::Player>(entity2);
    registry.emplace<Name>(entity2, "Player 2");
    registry.emplace<Deck>(entity2, deck1);
}
}  // namespace Runeterra::Game