#include "Enemy.h"
#include "EShot.h"

CEnemy::CEnemy() :enemy_img("res/enemy.png")
{
	CEnemy_X = 0;
	CEnemy_Y = 380;
	CEnemy_v = 5;
}

CEnemy::~CEnemy()
{
}

CEShot enemy_Shot;

void CEnemy::Draw_enemy()
{
	drawTextureBox(CEnemy_X, CEnemy_Y, 50, 50, 0, 0, 32, 32, enemy_img, color256(255, 255, 255),
		M_PI * 0.00, Vec2f(1, 1), Vec2f(25, 25));

	CEnemy_X += CEnemy_v;
	if (CEnemy_X == 225)CEnemy_v = -CEnemy_v;
	if (CEnemy_X == -225)CEnemy_v = -CEnemy_v;

	enemy_Shot.Play_Eshot();
}
