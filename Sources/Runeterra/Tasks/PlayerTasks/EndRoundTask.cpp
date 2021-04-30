// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Games/Game.hpp>
#include <Runeterra/Games/GameManager.hpp>
#include <Runeterra/Tasks/PlayerTasks/EndRoundTask.hpp>

namespace Runeterra::PlayerTasks
{
TaskStatus EndRoundTask::Impl(Game& game, [[maybe_unused]] Player& player)
{
    game.nextStep = Step::MainEnd;
    GameManager::ProcessNextStep(game, game.nextStep);

    return TaskStatus::COMPLETE;
}
}  // namespace Runeterra::PlayerTasks
