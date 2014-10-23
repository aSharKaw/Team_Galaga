#pragma once

//#include "lib/appEnv.hpp"
#include "Main.h"

// ’e‚ÌÅ‘å”‚ğ’è‹`
enum  {
	SHOT_MAX = 2
};

// ’e‚Ì’è‹`
struct Shot {


};



class CShot
{
public:
	CShot();
	~CShot();

	bool active_1;
	bool active_2;

//	float x_1;
//	float y_1;
//	float x_2;
//	float y_2;

	float P_X;
	float shot_X1;
	float shot_Y1;
	float shot_X2;
	float shot_Y2;

	void Play_shot();
};
