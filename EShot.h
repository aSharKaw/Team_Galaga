#pragma once

//#include "lib/appEnv.hpp"
#include "Main.h"

// �e�̍ő吔���`
enum  {
	SHOT_MAX = 2
};

// �e�̒�`
struct EShot {
	bool active;

	float x;
	float y;

};



class CEShot
{
public:
	CEShot();
	~CEShot();

	float shot_X;
	float shot_Xv;
	int count;
	void Play_Eshot();
};
