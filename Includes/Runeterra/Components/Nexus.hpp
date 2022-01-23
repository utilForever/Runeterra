// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong, Woojin Kim
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_NEXUS_HPP
#define RUNETERRA_NEXUS_HPP

#include <string>
#include <vector>

namespace Runeterra
{
//!
//! \brief Nexus struct.
//!
//! This class stores the information related to Nexus. The Nexus represents the
//! player's health. Apart from mode-specific exceptions, it has a maximum of 20
//! Health points, which it starts the game at. It cannot go above its maximum
//! health. It is destroyed when its health is depleted or the player otherwise
//! loses the game (eg. Fiora or decking out)—at which point the game ends and
//! its player suffers a loss.
//!
struct Nexus
{
    int health;
};
}  // namespace Runeterra

#endif  // RUNETERRA_NEXUS_HPP
