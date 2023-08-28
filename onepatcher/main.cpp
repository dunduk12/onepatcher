#define _CRT_SECURE_NO_WARNINGS

#include <Windows.h>
#include <intrin.h>
#include <thread>

#include <iostream>
#include <sstream>

#include <string>

#include <vector>
#include <tuple>

#include "onetap/loader.h"

// look at OneTap_Loader::init for onetap initialization.
OneTap_Loader g_onetap;

DWORD WINAPI Main(PVOID base)
{
	// call init
	g_onetap.init();

	return EXIT_SUCCESS;
}

BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
		CreateThread(nullptr, 0, Main, hInstance, 0, nullptr);

	return TRUE;
}