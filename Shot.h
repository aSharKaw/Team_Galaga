#pragma once

//#include "lib/appEnv.hpp"
#include "Main.h"

class CShot
{
public:
	CShot();
	~CShot();

	//弾の発射判定
	bool active_1;
	bool active_2;

//	float P_X;//発射対象のX位置

	//弾の発射初期X位置・Y位置
	float shot_X1;
	float shot_Y1;
	float shot_X2;
	float shot_Y2;

	void Play_shot(float P_X, float P_Y);//関数名
	//()内で発射元の座標を取得
};
