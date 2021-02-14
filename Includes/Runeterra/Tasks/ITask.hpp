// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_ITASK_HPP
#define RUNETERRA_ITASK_HPP

#include <Runeterra/Enums/TaskEnums.hpp>
#include <Runeterra/Models/Player.hpp>

namespace Runeterra
{
//!
//! \brief ITask class.
//!
//! This class is interface of various task classes.
//! All classes that inherit from it must implement GetTaskID and Impl methods.
//!
class ITask
{
 public:
    //! Calls Impl method and returns meta data.
    //! \param player The player to run task.
    //! \return The result of task processing.
    TaskStatus Run(Player& player);

 private:
    //! Processes task logic internally and returns meta data.
    //! \param player The player to run task.
    //! \return The result of task processing.
    virtual TaskStatus Impl(Player& player) = 0;
};

namespace Task
{
//! Calls Impl method and returns meta data.
//! \param player The player to run task.
//! \param task The task to run.
//! \return The result of task processing.
inline TaskStatus Run(Player& player, ITask&& task)
{
    return task.Run(player);
}
}  // namespace Task
}  // namespace Runeterra

#endif  // RUNETERRA_ITASK_HPP