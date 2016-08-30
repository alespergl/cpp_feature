#ifndef _INC_FEATURE
#define _INC_FEATURE

#if defined(__clang__) && defined(__apple_build_version__)
#pragma once
#include "feature-clang_apple.hpp"

#elif defined(__clang__)
#pragma once
#include "feature-clang.hpp"

#elif defined(__GNUC__)
#pragma once
#include "feature-gcc.hpp"

#elif defined(_MSC_VER)
#pragma once
#include "feature-msvc.hpp"

#endif


#ifndef __has_feature
#define __has_feature_def(x) __has_feature__ ## x
#define __has_feature(x) __has_feature_def(x)
#endif

#endif
