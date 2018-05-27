#pragma once

//�C���N���[�h
#include "../MyLib/ini_reader/ini_reader.h"

#include <string>

class flac_ini_Reader {
public:
	//�R���X�g���N�^
	flac_ini_Reader();
	//�t�@�C�����̎擾
	const std::string getFileName() const;
	//�G���R�[�h�I�v�V�����̎擾
	const std::string getOption() const;
	//�f�R�[�h�I�v�V�����̎擾
	const std::string getDecodeOption() const;
private:
	//ini�t�@�C���ǂݍ���
	ini_reader iniReader;
};
