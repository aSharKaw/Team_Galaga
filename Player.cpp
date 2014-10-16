#include "Player.h"
#include "Shot.h"

CPlayer::CPlayer() :player_img("res/player.png")
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
	drawTextureBox(CPlayer_X, CPlayer_Y, 50, 50, 0, 0, 32, 32, player_img, color256(255, 255, 255),
		M_PI * 0.00, Vec2f(1,1), Vec2f(25,25));

	if (app_env->isPressKey(GLFW_KEY_LEFT)){ CPlayer_X -= 5; }
	if (app_env->isPressKey(GLFW_KEY_RIGHT)){ CPlayer_X += 5; }
	if (CPlayer_X >= 225)CPlayer_X = 225;
	if (CPlayer_X <= -225)CPlayer_X = -225;

	Shot.Play_shot();
}


