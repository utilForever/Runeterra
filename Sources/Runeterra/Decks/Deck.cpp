// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Commons/Constants.hpp>
#include <Runeterra/Decks/Deck.hpp>

#include <algorithm>

namespace Runeterra
{
bool Deck::AddCard(Card card, int amount)
{
    if (amount > MAX_ALLOWED_IN_DECK)
    {
        return false;
    }

    if (m_numCards + amount > START_DECK_SIZE)
    {
        return false;
    }

    const auto cardIter =
        std::find_if(m_cards.begin(), m_cards.end(),
                     [&card](const std::tuple<Card, int>& elem) {
                         return std::get<0>(elem).cardCode == card.cardCode;
                     });

    if (cardIter != m_cards.end())
    {
        if (std::get<1>(*cardIter) + amount > MAX_ALLOWED_IN_DECK)
        {
            return false;
        }

        std::get<1>(*cardIter) += amount;
    }
    else
    {
        m_cards.emplace_back(std::make_tuple(card, amount));
    }

    m_numCards += amount;

    return true;
}

int Deck::GetCardCount(std::string_view cardCode) const
{
    const auto cardIter =
        std::find_if(m_cards.begin(), m_cards.end(),
                     [&cardCode](const std::tuple<Card, int>& elem) {
                         return std::get<0>(elem).cardCode == cardCode;
                     });

    if (cardIter != m_cards.end())
    {
        return std::get<1>(*cardIter);
    }

    return 0;
}
}  // namespace Runeterra