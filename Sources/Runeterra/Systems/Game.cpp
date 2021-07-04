// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Helpers/CardHelpers.hpp>
#include <Runeterra/Systems/Game.hpp>

namespace Runeterra
{
Game::Game()
{
    Card::LoadData(m_registry);
}
}  // namespace Runeterra