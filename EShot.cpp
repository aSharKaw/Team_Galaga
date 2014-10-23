#include "EShot.h"



CEShot::CEShot()
{
	shot_X = 0.0;
	shot_Y = Window::HEIGHT / 2 - 50.0;

	E_X = 0.0;
	E_Xv = 5;
	count = 0;

	// 初期化
	active = false;

}

CEShot::~CEShot()
{
}

void CEShot::Play_Eshot()
{
	count += 1;

	// 1秒ごとに弾を作成
	if (count >= 30) {
		if (active == false){
			active = true;

			//初期位置
			shot_X = E_X;

			// 初期位置は画面の下の方
			shot_Y = Window::HEIGHT / 2 - 50.0;
			count = 0;
		}
	}

	E_X += E_Xv;
	if (E_X == 225)E_Xv = -E_Xv;
	if (E_X == -225)E_Xv = -E_Xv;

	// 使用中の弾を動かす
	if (active == true){
		shot_Y -= 25.0;

		// 画面の外へ移動したら未使用にする
		if (shot_Y < (-Window::HEIGHT / 2)){ active = false; }
	}

	// 使用中の弾を表示
	if (active == true){
		drawFillCircle(shot_X, shot_Y,
			5.0, 5.0,
			10,
			Color(1, 1, 1));
	}
}