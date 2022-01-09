// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong, Woojin Kim
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Helpers/DeckCodeHelpers.hpp>
#include <Runeterra/Systems/GameSystem.hpp>

#include <entt/entt.hpp>

#include <string>
#include <vector>

using namespace Runeterra;

int main()
{
    const std::vector<std::string> deck =
        DeckCode::Decode("CEBAIAIFB4WDANQIAEAQGDAUDAQSIJZUAIAQCBIFAEAQCBAA");

    entt::registry registry;
    Game::CreatePlayers(registry, deck, deck);
}