#pragma once

//#include "lib/appEnv.hpp"
#include "Main.h"

class CEShot
{
public:
	CEShot();
	~CEShot();

	bool active;

	float E_X;
	float E_Xv;

	float shot_X;
	float shot_Y;

	int count;
	void Play_Eshot();
};
