#pragma once

//#include "lib/appEnv.hpp"
#include "Main.h"

class CPlayer
{
public:
	CPlayer();
	~CPlayer();

	Texture player_img;

	float CPlayer_X;
	float CPlayer_Y;

	void Draw_player();
};
