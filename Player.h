#pragma once

//#include "lib/appEnv.hpp"
#include "Main.h"

class CPlayer
{
public:
	CPlayer();
	~CPlayer();

	Texture player_img;//�v���C���[�摜

	float CPlayer_X;//�v���C���[X���W
	float CPlayer_Y;//�v���C���[Y���W

	float spin;//�g���N�^�[���邭��

	//bool twin_player;//�f���A���t�@�C�^�[�`�F�b�N

	void Draw_player(bool twin_player, bool torakuta);//�v���C���[�\���֐���
	//�i�f���A���`�F�b�N�E�g���N�^�`�F�b�N�j
};
