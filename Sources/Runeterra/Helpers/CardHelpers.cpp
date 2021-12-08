// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong, Woojin Kim
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Components/Attack.hpp>
#include <Runeterra/Components/CardCode.hpp>
#include <Runeterra/Components/Collectible.hpp>
#include <Runeterra/Components/Cost.hpp>
#include <Runeterra/Components/Health.hpp>
#include <Runeterra/Components/Name.hpp>
#include <Runeterra/Enums/CardEnums.hpp>
#include <Runeterra/Helpers/CardHelpers.hpp>

#include <json/json.hpp>
#include <magic_enum/magic_enum.hpp>

#include <fstream>

namespace Runeterra::Card
{
namespace Internal
{
void LoadCardInfo(entt::registry& registry, std::ifstream&& stream)
{
    // Read card data from JSON file
    nlohmann::json cardData;
    stream >> cardData;

    for (auto& data : cardData)
    {
        auto cardCode = data["cardCode"].get<std::string>();
        auto name = data["name"].get<std::string>();

        auto cardSet =
            magic_enum::enum_cast<CardSet>(data["set"].get<std::string>())
                .value_or(CardSet::Invalid);
        auto region =
            magic_enum::enum_cast<Region>(data["regionRef"].get<std::string>())
                .value_or(Region::Invalid);
        auto cardType =
            magic_enum::enum_cast<CardType>(data["type"].get<std::string>())
                .value_or(CardType::Invalid);
        auto rarity =
            magic_enum::enum_cast<Rarity>(data["rarityRef"].get<std::string>())
                .value_or(Rarity::Invalid);
        auto collectible = data["collectible"].get<bool>();
        auto cost = data["cost"].get<int>();

        const auto entity = registry.create();
        registry.emplace<CardCode>(entity, cardCode);
        registry.emplace<Name>(entity, name);
        registry.emplace<CardSet>(entity, cardSet);
        registry.emplace<Region>(entity, region);
        registry.emplace<CardType>(entity, cardType);
        registry.emplace<Rarity>(entity, rarity);
        registry.emplace<Collectible>(entity, collectible);
        registry.emplace<Cost>(entity, cost);

        if (cardType == CardType::Unit)
        {
            auto attack = data["attack"].get<int>();
            auto health = data["health"].get<int>();
            registry.emplace<Attack>(entity, attack);
            registry.emplace<Health>(entity, health, health);
        }
        if (cardType == CardType::Spell)
        {
            auto spellSpeed = magic_enum::enum_cast<SpellSpeed>(
                                  data["spellSpeedRef"].get<std::string>())
                                  .value_or(SpellSpeed::Invalid);
            registry.emplace<SpellSpeed>(entity, spellSpeed);
        }

        // TODO: Process keywords
        // for (auto& keyword : data["keywordRefs"])
        //{
        //    card.keywords.emplace_back(
        //        magic_enum::enum_cast<Keyword>(keyword.get<std::string>())
        //            .value_or(Keyword::Invalid));
        //}
    }

    stream.close();
}
}  // namespace Internal

void LoadData(entt::registry& registry)
{
    Internal::LoadCardInfo(registry,
                           std::ifstream{ RESOURCES_DIR "set1-en_us.json" });
    Internal::LoadCardInfo(registry,
                           std::ifstream{ RESOURCES_DIR "set2-en_us.json" });
    Internal::LoadCardInfo(registry,
                           std::ifstream{ RESOURCES_DIR "set3-en_us.json" });
    Internal::LoadCardInfo(registry,
                           std::ifstream{ RESOURCES_DIR "set4-en_us.json" });
    Internal::LoadCardInfo(registry,
                           std::ifstream{ RESOURCES_DIR "set5-en_us.json" });
}
}  // namespace Runeterra::Card