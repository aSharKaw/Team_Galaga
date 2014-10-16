#pragma once

//#include "lib/appEnv.hpp"
#include "Main.h"

// ’e‚ÌÅ‘å”‚ğ’è‹`
enum  {
	SHOT_MAX = 2
};

// ’e‚Ì’è‹`
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
