#include "Shot.h"

CShot::CShot()
{
	//������
	shot_X1 = 0.0;
	shot_Y1 = 0.0;
	shot_X2 = 0.0;
	shot_Y2 = 0.0;

//	P_X = 0.0;

	active_1 = false;
	active_2 = false;

}

CShot::~CShot()
{
}

void CShot::Play_shot(float P_X, float P_Y)
{

	// ��CTRL�Œe���P����
	if (app_env->isPushKey(GLFW_KEY_LEFT_CONTROL)) {
		if (active_1 == false){
			// ���g�p���g�p��
			active_1 = true;

			//�v���C���[��X�ʒu���擾
			shot_X1 = P_X;

			// Y���W�����ʒu�͉�ʂ̉��̕�
			shot_Y1 = P_Y;
		}
		else if (active_1 == true && active_2 == false){
			// ���g�p���g�p��
			active_2 = true;

			//�v���C���[��X�ʒu���擾
			shot_X2 = P_X;

			// Y���W�����ʒu�͉�ʂ̉��̕�
			shot_Y2 = P_Y;
		}

	}

	//�v���C���[�ʒu�̕ύX�Ɛ���
	if (app_env->isPressKey(GLFW_KEY_LEFT)){ P_X -= 5; }
	if (app_env->isPressKey(GLFW_KEY_RIGHT)){ P_X += 5; }
	if (P_X >= 225)P_X = 225;
	if (P_X <= -225)P_X = -225;

	// �g�p���̒e�𓮂���
	if (active_1 == true){
		shot_Y1 += 25.0;

		//��ʊO�ɏo���疢�g�p�ɂ���
		if (shot_Y1 > (Window::HEIGHT / 2)) active_1 = false;
	}
	if (active_2 == true){
		shot_Y2 += 25.0;

		//��ʊO�ɏo���疢�g�p�ɂ���
		if (shot_Y2 > (Window::HEIGHT / 2)) active_2 = false;
	}

	// �g�p���̒e��\��
	if (active_1 == true){
		drawFillCircle(shot_X1, shot_Y1,
			5.0, 5.0,
			10,
			Color(1, 1, 1));
	}
	if (active_2 == true){
		drawFillCircle(shot_X2, shot_Y2,
			5.0, 5.0,
			10,
			Color(1, 1, 1));
	}
}