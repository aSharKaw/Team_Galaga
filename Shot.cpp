#include "Shot.h"


// �e��z��ŗp��
Shot shot_data[SHOT_MAX];

CShot::CShot()
{
	shot_X = 0.0;

	// ������
	// ���ׂāu���g�p�v�Ƃ���
	for (int i = 0; i < elemsof(shot_data); ++i) {
		shot_data[i].active = false;
	}

}

CShot::~CShot()
{
}

void CShot::Play_shot()
{

	// �}�E�X�̍��N���b�N�Œe���P����
	if (app_env->isPushButton(Mouse::LEFT)) {
		for (int i = 0; i < elemsof(shot_data); ++i) {
			// �z��̒����疢�g�p�̃f�[�^��T��
			if (!shot_data[i].active) {
				// ���g�p���g�p��
				shot_data[i].active = true;

				// �����ʒu�͉�ʂ̉��̕�
				shot_data[i].x = shot_X;
				shot_data[i].y = -Window::HEIGHT / 2 + 50.0;

				break;
			}
		}
	}

	if (app_env->isPressKey('A')){ shot_X -= 5; }
	if (app_env->isPressKey('D')){ shot_X += 5; }

	// �g�p���̒e�𓮂���
	for (int i = 0; i < elemsof(shot_data); ++i) {
		if (shot_data[i].active) {
			shot_data[i].y += 25.0;

			// ��ʂ̊O�ֈړ������疢�g�p�ɂ���
			if (shot_data[i].y >(Window::HEIGHT / 2)) {
				shot_data[i].active = false;
			}
		}
	}

	// �g�p���̒e��\��
	for (int i = 0; i < elemsof(shot_data); ++i) {
		if (shot_data[i].active) {
			drawFillCircle(shot_data[i].x, shot_data[i].y,
				5.0, 5.0,
				10,
				Color(1, 1, 1));
		}
	}
}