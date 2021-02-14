// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_CARD_ENUMS_HPP
#define RUNETERRA_CARD_ENUMS_HPP

namespace Runeterra
{
//! \brief An enumerator for identifying the region of the card.
enum class Region
{
    Invalid,
    Bilgewater,
    Demacia,
    Freljord,
    Ionia,
    Noxus,
    PiltoverZaun,
    ShadowIsles,
    Targon,
};

//! \brief An enumerator for identifying the keyword of the card.
enum class Keyword
{
    Invalid,
    Attune,
    Augment,
    Autoplay,
    Barrier,
    Burst,
    CantBlock,
    Challenger,
    Deep,
    DoubleStrike,
    Elusive,
    Ephemeral,
    Fast,
    Fearsome,
    Fleeting,
    Fury,
    Imbue,
    Immobile,
    LandmarkVisualOnly,
    LastBreath,
    Lifesteal,
    Overwhelm,
    QuickStrike,
    Regeneration,
    Scout,
    Skill,
    Slow,
    SpellOverwhelm,
    SpellShield,
    Tough,
    Vulnerable,
};

//! \brief An enumerator for identifying the spell speed of the card.
enum class SpellSpeed
{
    Invalid,
    Slow,
    Fast,
    Burst,
};

//! \brief An enumerator for identifying the rarity of the card.
enum class Rarity
{
    Invalid,
    None,
    Common,
    Rare,
    Epic,
    Champion,
};

//! \brief An enumerator for identifying the type of the card.
enum class CardType
{
    Invalid,
    Unit,
    Spell,
    Ability,
    Landmark,
};

//! \brief An enumerator for identifying the set of the card.
enum class CardSet
{
    Invalid,
    Set1,
    Set2,
    Set3,
};
}  // namespace Runeterra

#endif  // RUNETERRA_CARD_ENUMS_HPP