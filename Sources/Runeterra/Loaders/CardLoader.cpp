// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Loaders/CardLoader.hpp>

#include <json/json.hpp>
#include <magic_enum/magic_enum.hpp>

#include <fstream>

namespace Runeterra
{
void CardLoader::Load(std::vector<std::unique_ptr<Card>>& cards)
{
    LoadInternal(cards, std::ifstream{ RESOURCES_DIR "set1-en_us.json" });
    LoadInternal(cards, std::ifstream{ RESOURCES_DIR "set2-en_us.json" });
    LoadInternal(cards, std::ifstream{ RESOURCES_DIR "set3-en_us.json" });
}

void CardLoader::LoadInternal(std::vector<std::unique_ptr<Card>>& cards,
                              std::ifstream&& stream)
{
    // Read card data from JSON file
    nlohmann::json cardData;

    if (!stream.is_open())
    {
        throw std::runtime_error("Can't open file - Path: " RESOURCES_DIR);
    }

    stream >> cardData;

    for (auto& data : cardData)
    {
        std::unique_ptr<Card> card = std::make_unique<Card>();

        card->region = magic_enum::enum_cast<Region>(
                           data["regionRef"].get<std::string_view>())
                           .value_or(Region::Invalid);
        card->attack = data["attack"].get<int>();
        card->cost = data["cost"].get<int>();
        card->health = data["health"].get<int>();
        card->name = data["name"].get<std::string_view>();
        card->cardCode = data["cardCode"].get<std::string_view>();
        for (auto& keyword : data["keywordRefs"])
        {
            card->keywords.emplace_back(
                magic_enum::enum_cast<Keyword>(keyword.get<std::string_view>())
                    .value_or(Keyword::Invalid));
        }
        card->spellSpeed = magic_enum::enum_cast<SpellSpeed>(
                               data["spellSpeedRef"].get<std::string_view>())
                               .value_or(SpellSpeed::Invalid);
        card->rarity = magic_enum::enum_cast<Rarity>(
                           data["rarityRef"].get<std::string_view>())
                           .value_or(Rarity::Invalid);
        card->type = magic_enum::enum_cast<CardType>(
                         data["type"].get<std::string_view>())
                         .value_or(CardType::Invalid);
        card->isCollectible = data["collectible"].get<bool>();
        card->set =
            magic_enum::enum_cast<CardSet>(data["set"].get<std::string_view>())
                .value_or(CardSet::Invalid);

        cards.emplace_back(std::move(card));
    }

    stream.close();
}
}  // namespace Runeterra