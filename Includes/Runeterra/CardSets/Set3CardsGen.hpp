// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong, Woojin Kim
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_SET3_CARDS_GEN_HPP
#define RUNETERRA_SET3_CARDS_GEN_HPP

#include <entt/entt.hpp>

namespace Runeterra::Set3
{
//! Adds Bandle City cards that are collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddBandleCity(entt::registry& registry);

//! Adds Bandle City cards that are not collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddBandleCityNonCollect(entt::registry& registry);

//! Adds Bilgewater cards that are collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddBilgewater(entt::registry& registry);

//! Adds Bilgewater cards that are not collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddBilgewaterNonCollect(entt::registry& registry);

//! Adds Demacia cards that are collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddDemacia(entt::registry& registry);

//! Adds Demacia cards that are not collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddDemaciaNonCollect(entt::registry& registry);

//! Adds Freljord cards that are collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddFreljord(entt::registry& registry);

//! Adds Freljord cards that are not collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddFreljordNonCollect(entt::registry& registry);

//! Adds Ionia cards that are collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddIonia(entt::registry& registry);

//! Adds Ionia cards that are not collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddIoniaNonCollect(entt::registry& registry);

//! Adds Noxus cards that are collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddNoxus(entt::registry& registry);

//! Adds Noxus cards that are not collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddNoxusNonCollect(entt::registry& registry);

//! Adds Piltover & Zaun cards that are collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddPiltoverZaun(entt::registry& registry);

//! Adds Piltover & Zaun cards that are not collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddPiltoverZaunNonCollect(entt::registry& registry);

//! Adds Shadow Isles cards that are collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddShadowIsles(entt::registry& registry);

//! Adds Shadow Isles cards that are not collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddShadowIslesyNonCollect(entt::registry& registry);

//! Adds Shurima cards that are collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddShurima(entt::registry& registry);

//! Adds Shurima cards that are not collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddShurimaNonCollect(entt::registry& registry);

//! Adds Targon cards that are collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddTargon(entt::registry& registry);

//! Adds Targon cards that are not collectible to \p cards.
//! \param registry A registry of the entity-component system.
void AddTargonNonCollect(entt::registry& registry);

//! Adds all cards to \p cards.
//! \param registry A registry of the entity-component system.
void AddAll(entt::registry& registry);
}  // namespace Runeterra::Set3

#endif  // RUNETERRA_SET3_CARDS_GEN_HPP
