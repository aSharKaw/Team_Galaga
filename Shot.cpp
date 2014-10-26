#include "Shot.h"

CShot::CShot()
{
	//初期化
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

	// 左CTRLで弾を１つ生成
	if (app_env->isPushKey(GLFW_KEY_LEFT_CONTROL)) {
		if (active_1 == false){
			// 未使用→使用中
			active_1 = true;

			//プレイヤーのX位置を取得
			shot_X1 = P_X;

			// Y座標初期位置は画面の下の方
			shot_Y1 = P_Y;
		}
		else if (active_1 == true && active_2 == false){
			// 未使用→使用中
			active_2 = true;

			//プレイヤーのX位置を取得
			shot_X2 = P_X;

			// Y座標初期位置は画面の下の方
			shot_Y2 = P_Y;
		}

	}

	//プレイヤー位置の変更と制限
	if (app_env->isPressKey(GLFW_KEY_LEFT)){ P_X -= 5; }
	if (app_env->isPressKey(GLFW_KEY_RIGHT)){ P_X += 5; }
	if (P_X >= 225)P_X = 225;
	if (P_X <= -225)P_X = -225;

	// 使用中の弾を動かす
	if (active_1 == true){
		shot_Y1 += 25.0;

		//画面外に出たら未使用にする
		if (shot_Y1 > (Window::HEIGHT / 2)) active_1 = false;
	}
	if (active_2 == true){
		shot_Y2 += 25.0;

		//画面外に出たら未使用にする
		if (shot_Y2 > (Window::HEIGHT / 2)) active_2 = false;
	}

	// 使用中の弾を表示
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