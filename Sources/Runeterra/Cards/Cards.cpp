// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Cards/Cards.hpp>
#include <Runeterra/Commons/Constants.hpp>
#include <Runeterra/Loaders/CardLoader.hpp>

namespace Runeterra
{
Cards& Cards::GetInstance()
{
    static Cards instance;
    return instance;
}

const std::vector<Card>& Cards::GetAllCards() const
{
    return m_cards;
}

std::optional<Card> Cards::FindCardByCode(const std::string_view& code)
{
    for (const auto& card : m_cards)
    {
        if (card.cardCode == code)
        {
            return card;
        }
    }

    return std::nullopt;
}

Cards::Cards()
{
    m_cards.reserve(NUM_ALL_CARDS);

    CardLoader::Load(m_cards);

    for (auto& card : m_cards)
    {
        card.Initialize();
    }
}

Cards::~Cards()
{
    m_cards.clear();
}
}  // namespace Runeterra