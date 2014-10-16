#include "EShot.h"


// �e��z��ŗp��
EShot Eshot_data[SHOT_MAX];

CEShot::CEShot()
{
	shot_X = 0.0;
	shot_Xv = 5;
	count = 0;

	// ������
	// ���ׂāu���g�p�v�Ƃ���
	for (int i = 0; i < elemsof(Eshot_data); ++i) {
		Eshot_data[i].active = false;
	}

}

CEShot::~CEShot()
{
}

void CEShot::Play_Eshot()
{
	count += 1;

	// �}�E�X�̍��N���b�N�Œe���P����
	if (count == 60) {
		for (int i = 0; i < elemsof(Eshot_data); ++i) {
			// �z��̒����疢�g�p�̃f�[�^��T��
			if (!Eshot_data[i].active) {
				// ���g�p���g�p��
				Eshot_data[i].active = true;

				// �����ʒu�͉�ʂ̉��̕�
				Eshot_data[i].x = shot_X;
				Eshot_data[i].y = Window::HEIGHT / 2 - 50.0;
				count = 0;
				break;
			}
		}
	}

	shot_X += shot_Xv;
	if (shot_X == 225)shot_Xv = -shot_Xv;
	if (shot_X == -225)shot_Xv = -shot_Xv;

	// �g�p���̒e�𓮂���
	for (int i = 0; i < elemsof(Eshot_data); ++i) {
		if (Eshot_data[i].active) {
			Eshot_data[i].y -= 25.0;

			// ��ʂ̊O�ֈړ������疢�g�p�ɂ���
			if (Eshot_data[i].y <(-Window::HEIGHT / 2)) {
				Eshot_data[i].active = false;
			}
		}
	}

	// �g�p���̒e��\��
	for (int i = 0; i < elemsof(Eshot_data); ++i) {
		if (Eshot_data[i].active) {
			drawFillCircle(Eshot_data[i].x, Eshot_data[i].y,
				5.0, 5.0,
				10,
				Color(1, 1, 1));
		}
	}
}