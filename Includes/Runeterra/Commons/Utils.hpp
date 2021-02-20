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
int GetNextVarInt(std::vector<uint8_t>* stream);

//! Converts enum value region to string.
//! \param region A enum value to convert.
//! \return A converted region string.
std::string RegionToString(const Region& region);
}  // namespace Runeterra

#endif  // RUNETERRA_UTILS_HPP