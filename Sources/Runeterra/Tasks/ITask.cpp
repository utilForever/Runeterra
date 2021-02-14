// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Tasks/ITask.hpp>

namespace Runeterra
{
TaskStatus ITask::Run(Player& player)
{
    return Impl(player);
}
}  // namespace Runeterra