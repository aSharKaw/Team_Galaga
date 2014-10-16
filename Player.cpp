#include "Player.h"
#include "Shot.h"

CPlayer::CPlayer()
{
	CPlayer_X = 0;
	CPlayer_Y = -380;

}

CPlayer::~CPlayer()
{
}

CShot Shot;

void CPlayer::Draw_player()
{
	drawFillBox(CPlayer_X, CPlayer_Y, 50, 50, color256(255, 255, 255),
		M_PI * 0.00, Vec2f(1,1), Vec2f(25,25));

	if (app_env->isPressKey('A')){ CPlayer_X -= 5; }
	if (app_env->isPressKey('D')){ CPlayer_X += 5; }

	Shot.Play_shot();
}


