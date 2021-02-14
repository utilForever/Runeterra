// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_END_ROUND_TASK_HPP
#define RUNETERRA_END_ROUND_TASK_HPP

#include <Runeterra/Tasks/ITask.hpp>

namespace Runeterra::PlayerTasks
{
//!
//! \brief EndRoundTask class.
//!
//! This class represents the task for ending current player's round.
//!
class EndRoundTask : public ITask
{
 private:
    //! Processes task logic internally and returns meta data.
    //! \param game The game context.
    //! \param player The player to run task.
    //! \return The result of task processing.
    TaskStatus Impl(Game& game, Player& player) override;
};
}  // namespace Runeterra::PlayerTasks

#endif  // RUNETERRA_END_ROUND_TASK_HPP
