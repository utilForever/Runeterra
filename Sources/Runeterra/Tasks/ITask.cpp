// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Tasks/ITask.hpp>

namespace Runeterra
{
TaskStatus ITask::Run(Game& game, Player& player)
{
    return Impl(game, player);
}
}  // namespace Runeterra