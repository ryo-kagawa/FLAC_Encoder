//インクルード
#include "flac_ini_Reader.h"
#include <iostream>

//定数宣言
//ファイル名
static const std::string FLAC_INI_FILE_NAME = "flac.ini";
//コメント行
static const char COMMENT_PREFIX = '#';
//区切り文字
static const char SEPARATOR = '=';
//トリム文字
static const std::string TRIM = {' ', '\t'};
//プロパティ
namespace PROPERTIES {
	static const std::string FILE_DIR = "fileDir";
	static const std::string ENCODE_OPTION = "encodeOption";
	static const std::string DECODE_OPTION = "decodeOption";
}

flac_ini_Reader::flac_ini_Reader():
	iniReader(FLAC_INI_FILE_NAME, COMMENT_PREFIX, SEPARATOR, TRIM)
{
}

const std::string flac_ini_Reader::getFileName() const {
	return iniReader.get(PROPERTIES::FILE_DIR);
}

const std::string flac_ini_Reader::getOption() const {
	return iniReader.get(PROPERTIES::ENCODE_OPTION);
}

const std::string flac_ini_Reader::getDecodeOption() const {
	return iniReader.get(PROPERTIES::DECODE_OPTION);
}
