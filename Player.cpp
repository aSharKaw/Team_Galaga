#include "Player.h"
#include "Shot.h"

CPlayer::CPlayer() :player_img("res/player.png")
{
	//������
	CPlayer_X = 0;
	CPlayer_Y = -380;

	spin = 0.0;
}

CPlayer::~CPlayer()
{
}

CShot Shot;//Shot.h���O�錾

void CPlayer::Draw_player(bool twin_player, bool torakuta)
{
	//�V���O���t�@�C�^�[
	if (twin_player == false){
		//�v���C���[�\��
		drawTextureBox(CPlayer_X, CPlayer_Y, 50, 50, 0, 0, 32, 32, player_img, color256(255, 255, 255),
			M_PI * spin, Vec2f(1, 1), Vec2f(25, 25));

		//�ړ�
		if (app_env->isPressKey(GLFW_KEY_LEFT)){ CPlayer_X -= 5; }
		if (app_env->isPressKey(GLFW_KEY_RIGHT)){ CPlayer_X += 5; }
		//�ړ�����
		if (CPlayer_X >= 225)CPlayer_X = 225;
		if (CPlayer_X <= -225)CPlayer_X = -225;

		//�g���N�^�[�r�[�����̏���
		if (torakuta == true){
			spin += 0.1;
			CPlayer_Y += 2;
		}
		if (torakuta == false){
			spin = 0.0;
			CPlayer_Y -= 4;
			if (CPlayer_Y <= -380)CPlayer_Y = -380;
		}

		//Shot.h����
		Shot.Play_shot(CPlayer_X, CPlayer_Y);
	}

	//�f���A���t�@�C�^�[
	if (twin_player == true){
		//�v���C���[�\��
		drawTextureBox(CPlayer_X, CPlayer_Y, 50, 50, 0, 0, 32, 32, player_img, color256(255, 255, 255),
			M_PI * 0.00, Vec2f(1, 1), Vec2f(25, 25));
		drawTextureBox(CPlayer_X + 50, CPlayer_Y, 50, 50, 0, 0, 32, 32, player_img, color256(255, 255, 255),
			M_PI * 0.00, Vec2f(1, 1), Vec2f(25, 25));

		//�ړ�
		if (app_env->isPressKey(GLFW_KEY_LEFT)){ CPlayer_X -= 5; }
		if (app_env->isPressKey(GLFW_KEY_RIGHT)){ CPlayer_X += 5; }
		//�ړ�����
		if (CPlayer_X >= 175)CPlayer_X = 175;
		if (CPlayer_X <= -225)CPlayer_X = -225;

		//Shot.h����
		Shot.Play_shot(CPlayer_X, CPlayer_Y);
		Shot.Play_shot(CPlayer_X + 50, CPlayer_Y);
	}

}


