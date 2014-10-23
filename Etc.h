#pragma once

//#include "lib/appEnv.hpp"
#include "Main.h"
#include "Collision.h"

class CEtc
{
public:
	CEtc();
	~CEtc();

	Texture HP_img;

	int score;
	int player_HP;

	int X;
	int Y;

	void HP_move();

};
