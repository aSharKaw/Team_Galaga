#pragma once

//#include "lib/appEnv.hpp"
#include "Main.h"

class CShot
{
public:
	CShot();
	~CShot();

	//�e�̔��˔���
	bool active_1;
	bool active_2;

//	float P_X;//���ˑΏۂ�X�ʒu

	//�e�̔��ˏ���X�ʒu�EY�ʒu
	float shot_X1;
	float shot_Y1;
	float shot_X2;
	float shot_Y2;

	void Play_shot(float P_X, float P_Y);//�֐���
	//()���Ŕ��ˌ��̍��W���擾
};
