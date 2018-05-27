//インクルード
#include "flac_ini_Reader.h"

#include <cstdlib>
#include <conio.h>
#include <algorithm>
#include <filesystem>
#include <iostream>

//メイン関数
int main(const int argc, const char *argv[]) {
	const flac_ini_Reader flacIniReader;
	for(int i=1; i<argc; ++i) {
		const std::string arg = argv[i];
		namespace sys = std::tr2::sys;
		const sys::path p(arg);
		std::for_each(sys::recursive_directory_iterator(p), sys::recursive_directory_iterator(), [flacIniReader](const sys::path &p) {
			if(sys::is_regular_file(p)) {
				if(p.extension() == ".wav") {
					const std::string command = flacIniReader.getFileName() + " " + flacIniReader.getOption() + " " + '"' + p.string() + '"';
					system(command.c_str());
					remove(p.string().c_str());
					return;
				}
				if(p.extension() == ".flac") {
					const std::string decodeCommand = flacIniReader.getFileName() + " " + flacIniReader.getDecodeOption() + " " + '"' + p.string() + '"';
					system(decodeCommand.c_str());
					remove(p.string().c_str());
					sys::path a = p;
					a.replace_extension(".wav");
					const std::string command = flacIniReader.getFileName() + " " + flacIniReader.getOption() + " " + '"' + a.string() + '"';
					system(command.c_str());
					remove(a.string().c_str());
					return;
				}
			}
		});
	}
	_getch();
	_kbhit();
	return EXIT_SUCCESS;
}
