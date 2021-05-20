// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_PLAYER_HPP
#define RUNETERRA_PLAYER_HPP

#include <Runeterra/Enums/GameEnums.hpp>

namespace Runeterra
{
//!
//! \brief Player class.
//!
//! This class stores various information used in Legends of Runeterra game.
//! NOTE: This information should be used differently from the existing card
//! information because there are various effects on the card.
//!
class Player
{
 public:
    //! Constructs a player with given \p type.
    //! \param type The type of the player.
    Player(PlayerType type);

    //! Returns the type of the player.
    //! \return The type of the player.
    [[nodiscard]] PlayerType GetType() const;

 private:
    PlayerType m_type;
};
}  // namespace Runeterra

#endif  // RUNETERRA_PLAYER_HPP