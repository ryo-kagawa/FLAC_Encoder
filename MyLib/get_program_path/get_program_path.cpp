//インクルード
#include "get_program_path.h"

#include <Windows.h>

const std::string MyFunction::get_program_path() {
	char path[MAX_PATH];
	GetModuleFileNameA(NULL, path, MAX_PATH);
	char drive[MAX_PATH];
	char dir[MAX_PATH];
	_splitpath_s(path, drive, MAX_PATH, dir, MAX_PATH, NULL, 0, NULL, 0);
	const std::string relativePath(std::string(drive) + std::string(dir));

	return relativePath;
}
