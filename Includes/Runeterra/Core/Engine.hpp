// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_ENGINE_HPP
#define RUNETERRA_ENGINE_HPP

#include <entt/entt.hpp>

#include <optional>

namespace Runeterra
{
//!
//! \brief Engine class.
//!
//! This class is a core engine of Runeterra library.
//!
class Engine
{
 public:
    //! Constructs a default engine and initializes card data.
    Engine();

    //! Returns the number of all cards.
    //! \return The number of all cards.
    [[nodiscard]] int NumAllCards();

    //! Returns a card code that matches \p nameToFind.
    //! \param nameToFind The card name to find.
    //! \return A card code that matches \p nameToFind.
    [[nodiscard]] std::optional<std::string> FindCardCodeByName(
        std::string_view&& nameToFind);

 private:
    //! Loads a card data from JSON files.
    void LoadCardData();

    entt::registry m_registry;
};
}  // namespace Runeterra

#endif  // RUNETERRA_ENGINE_HPP
