#pragma once

#include "Main.h"
#include "lib/random.hpp"

class CBackground
{
public:
	CBackground();
	~CBackground();

	//ƒ‰ƒ“ƒ_ƒ€
	Random random;


	//¯‚Ìİ‚èˆ
	struct star_pos{
		//¯‚ÌˆÊ’u
		float fast_x, fast_y;
	};



	int game_sw;
	int f;
	int star_time_1;
	int star_time_2;
	float star_burst;
	int back_star;

	void draw_background();

};

