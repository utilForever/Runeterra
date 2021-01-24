// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Loaders/CardLoader.hpp>

namespace Runeterra
{
void CardLoader::Load(std::vector<std::unique_ptr<Card>>& cards)
{
    LoadInternal(cards, "set1-en_us.json");
    LoadInternal(cards, "set2-en_us.json");
    LoadInternal(cards, "set3-en_us.json");
}

void CardLoader::LoadInternal(std::vector<std::unique_ptr<Card>>& cards,
                              const char* fileName)
{
}
}  // namespace Runeterra