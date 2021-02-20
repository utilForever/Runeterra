// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_UTILS_HPP
#define RUNETERRA_UTILS_HPP

#include <Runeterra/Enums/CardEnums.hpp>

#include <string>
#include <vector>

namespace Runeterra
{
//! Gets next int variable.
//! \param stream A stream for decoded base32 string.
//! \return A next int variable.
inline int GetNextVarInt(std::vector<uint8_t>* stream)
{
    if (stream->empty())
    {
        return -1;
    }

    int numRead = 0;
    int result = 0;
    int shift = 0;

    while (true)
    {
        const uint8_t c = (*stream)[numRead++];
        result |= (c & 0x07f) << shift;
        shift += 7;

        if (!(c & 0x80))
        {
            break;
        }
    }

    stream->erase(stream->begin(), stream->begin() + numRead);

    return result;
}

//! Converts enum value region to string.
//! \param region A enum value to convert.
//! \return A converted region string.
inline std::string RegionToString(const Region& region)
{
    const std::vector<std::pair<std::string, Region>> regionMap{
        { "DE", Region::Demacia },      { "FR", Region::Freljord },
        { "IO", Region::Ionia },        { "NX", Region::Noxus },
        { "PZ", Region::PiltoverZaun }, { "SI", Region::ShadowIsles },
        { "BW", Region::Bilgewater }
    };

    for (const auto& elem : regionMap)
    {
        if (elem.second == region)
        {
            return elem.first;
        }
    }

    return "";
}
}  // namespace Runeterra

#endif  // RUNETERRA_UTILS_HPP