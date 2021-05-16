// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_CARDS_HPP
#define RUNETERRA_CARDS_HPP

#include <optional>

#include <entt/entt.hpp>

namespace Runeterra
{
//!
//! \brief Cards class.
//!
//! This class provides several search methods.
//!
class Cards
{
 public:
    //! Returns the number of all cards.
    //! \param registry A registry of the entity-component system.
    //! \return The number of all cards.
    [[nodiscard]] static int NumAllCards(entt::registry& registry);

    //! Returns a card code that matches \p nameToFind.
    //! \param registry A registry of the entity-component system.
    //! \param nameToFind The card name to find.
    //! \return A card code that matches \p nameToFind.
    [[nodiscard]] static std::optional<std::string> FindCardCodeByName(
        entt::registry& registry, const std::string_view& nameToFind);
};
}  // namespace Runeterra

#endif  // RUNETERRA_CARDS_HPP