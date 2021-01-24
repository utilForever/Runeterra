// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Cards/Cards.hpp>
#include <Runeterra/Loaders/CardLoader.hpp>

namespace Runeterra
{
Cards& Cards::GetInstance()
{
    return m_instance;
}

Cards::Cards()
{
    CardLoader::Load(m_cards);
}

Cards::~Cards()
{
    m_cards.clear();
}

}  // namespace Runeterra