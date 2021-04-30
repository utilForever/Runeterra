// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef RUNETERRA_MACROS_HPP
#define RUNETERRA_MACROS_HPP

#if defined(_WIN32) || defined(_WIN64)
#define RUNETERRA_WINDOWS
#elif defined(__APPLE__)
#define RUNETERRA_APPLE
#ifndef RUNETERRA_IOS
#define RUNETERRA_MACOSX
#endif
#elif defined(linux) || defined(__linux__)
#define RUNETERRA_LINUX
#endif

#endif  // RUNETERRA_MACROS_HPP
