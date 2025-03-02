#pragma once

#ifdef HZ_PLATFORM_WINDOWS

#ifdef HZ_DLL_BUILD
	#define HAZEL_API __declspec(dllexport)
#else
	#define HAZEL_API __declspec(dllimport)
#endif // HZ_DLL_BUILD

#else
	#error Hazel supports Windows only!
#endif // HZ_PLATFORM_WINDOWS
