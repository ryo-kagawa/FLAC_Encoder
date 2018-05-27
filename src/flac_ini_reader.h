#pragma once

//インクルード
#include "../MyLib/ini_reader/ini_reader.h"

#include <string>

class flac_ini_Reader {
public:
	//コンストラクタ
	flac_ini_Reader();
	//ファイル名の取得
	const std::string getFileName() const;
	//エンコードオプションの取得
	const std::string getOption() const;
	//デコードオプションの取得
	const std::string getDecodeOption() const;
private:
	//iniファイル読み込み
	ini_reader iniReader;
};
