#include "Shot.h"


// 弾を配列で用意
Shot shot_data[SHOT_MAX];

CShot::CShot()
{
	shot_X = 0.0;

	// 初期化
	// すべて「未使用」とする
	for (int i = 0; i < elemsof(shot_data); ++i) {
		shot_data[i].active = false;
	}

}

CShot::~CShot()
{
}

void CShot::Play_shot()
{

	// マウスの左クリックで弾を１つ生成
	if (app_env->isPushKey(GLFW_KEY_LEFT_CONTROL)) {
		for (int i = 0; i < elemsof(shot_data); ++i) {
			// 配列の中から未使用のデータを探す
			if (!shot_data[i].active) {
				// 未使用→使用中
				shot_data[i].active = true;

				// 初期位置は画面の下の方
				shot_data[i].x = shot_X;
				shot_data[i].y = -Window::HEIGHT / 2 + 50.0;

				break;
			}
		}
	}

	if (app_env->isPressKey(GLFW_KEY_LEFT)){ shot_X -= 5; }
	if (app_env->isPressKey(GLFW_KEY_RIGHT)){ shot_X += 5; }
	if (shot_X >= 225)shot_X = 225;
	if (shot_X <= -225)shot_X = -225;

	// 使用中の弾を動かす
	for (int i = 0; i < elemsof(shot_data); ++i) {
		if (shot_data[i].active) {
			shot_data[i].y += 25.0;

			// 画面の外へ移動したら未使用にする
			if (shot_data[i].y >(Window::HEIGHT / 2)) {
				shot_data[i].active = false;
			}
		}
	}

	// 使用中の弾を表示
	for (int i = 0; i < elemsof(shot_data); ++i) {
		if (shot_data[i].active) {
			drawFillCircle(shot_data[i].x, shot_data[i].y,
				5.0, 5.0,
				10,
				Color(1, 1, 1));
		}
	}
}