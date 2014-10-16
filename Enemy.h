#pragma once

//#include "lib/appEnv.hpp"
#include "Main.h"

class CEnemy
{
public:
	CEnemy();
	~CEnemy();

	Texture enemy_img;

	float CEnemy_X;
	float CEnemy_Y;
	float CEnemy_v;

	void Draw_enemy();
};
