/*
 * Copyright (C) 2014 Patrick Mours. All rights reserved.
 * License: https://github.com/crosire/reshade#license
 */

#include "dll_resources.hpp"
#include <Windows.h>

extern HMODULE g_module_handle;

reshade::resources::data_resource reshade::resources::load_data_resource(unsigned int id)
{
	const HRSRC info = FindResource(g_module_handle, MAKEINTRESOURCE(id), RT_RCDATA);
	const HGLOBAL handle = LoadResource(g_module_handle, info);

	data_resource result;
	result.data = LockResource(handle);
	result.data_size = SizeofResource(g_module_handle, info);

	return result;
}
