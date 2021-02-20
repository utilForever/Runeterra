// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_CARD_HPP
#define RUNETERRA_CARD_HPP

#include <Runeterra/Enums/CardEnums.hpp>

#include <string>
#include <vector>

namespace Runeterra
{
//!
//! \brief Card class.
//!
//! This class stores card information such as attack, health and cost.
//!
class Card
{
 public:
    //! Initializes card data.
    void Initialize();

    CardSet set;
    Region region;
    Rarity rarity;
    CardType type;
    SpellSpeed spellSpeed;
    std::vector<Keyword> keywords;
    std::string name;
    std::string cardCode;
    int attack;
    int cost;
    int health;
    bool isCollectible;
};
}  // namespace Runeterra

#endif  // RUNETERRA_CARD_HPP