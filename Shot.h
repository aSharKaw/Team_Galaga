#pragma once

//#include "lib/appEnv.hpp"
#include "Main.h"

// 弾の最大数を定義
enum  {
	SHOT_MAX = 2
};

// 弾の定義
struct Shot {
	bool active;

	float x;
	float y;

};



class CShot
{
public:
	CShot();
	~CShot();

	float shot_X;

	void Play_shot();
};
