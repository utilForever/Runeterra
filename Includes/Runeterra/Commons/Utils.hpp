// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_UTILS_HPP
#define RUNETERRA_UTILS_HPP

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
}  // namespace Runeterra

#endif  // RUNETERRA_UTILS_HPP