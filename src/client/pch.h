#pragma once

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX

#include <Windows.h>
#include <atlbase.h>
#include <dbghelp.h>
#include <TlHelp32.h>
#include <wincrypt.h>

#include <filesystem>
#include <fstream>
#include <mutex>
#include <queue>
#include <sstream>
#include <string>

#include "gsl/gsl"
#include "MinHook.h"
#include "imgui.h"
#include "backends/imgui_impl_opengl2.h"
#include "backends/imgui_impl_win32.h"

/*
Size found using Ghidra
IMAGE_NT_HEADERS32 -> IMAGE_OPTIONAL_HEADER32: SizeOfImage - SizeOfHeaders
*/
constexpr auto BINARY_PAYLOAD_SIZE = 0x15C1000;

constexpr auto MOD_NAME = "iw1x";