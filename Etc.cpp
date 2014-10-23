#include "Etc.h"
#include "Player.h"
#include "EShot.h"
#include "Enemy.h"

CEtc::CEtc() :HP_img("res/HP.png")
{
	score = 0;
	player_HP = 2;
	X = -240;
	Y = -440;
}

CEtc::~CEtc()
{
}

Collision Hit;
CPlayer Player;
CEShot EShot;

void CEtc::HP_move()
{
	drawTextureBox(X, Y, 50 * player_HP, 50, 0, 0, 32 * player_HP, 32, HP_img, color256(255, 255, 255));

	if (app_env->isPushKey('I')){
		player_HP += 1;
	}
	if (app_env->isPushKey('O')){
		player_HP -= 1;
	}
	if (Hit.IsHit(Player.CPlayer_X - 25, Player.CPlayer_Y - 25, Player.CPlayer_X + 25, Player.CPlayer_Y + 25, 
		EShot.shot_X -5, EShot.shot_Y -5 , EShot.shot_X + 5, EShot.shot_Y + 5) == true){
		player_HP -= 1;
	}

}
