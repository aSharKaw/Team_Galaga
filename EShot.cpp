#include "EShot.h"


// 弾を配列で用意
EShot Eshot_data[SHOT_MAX];

CEShot::CEShot()
{
	shot_X = 0.0;
	shot_Xv = 5;
	count = 0;

	// 初期化
	// すべて「未使用」とする
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

	// マウスの左クリックで弾を１つ生成
	if (count == 60) {
		for (int i = 0; i < elemsof(Eshot_data); ++i) {
			// 配列の中から未使用のデータを探す
			if (!Eshot_data[i].active) {
				// 未使用→使用中
				Eshot_data[i].active = true;

				// 初期位置は画面の下の方
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

	// 使用中の弾を動かす
	for (int i = 0; i < elemsof(Eshot_data); ++i) {
		if (Eshot_data[i].active) {
			Eshot_data[i].y -= 25.0;

			// 画面の外へ移動したら未使用にする
			if (Eshot_data[i].y <(-Window::HEIGHT / 2)) {
				Eshot_data[i].active = false;
			}
		}
	}

	// 使用中の弾を表示
	for (int i = 0; i < elemsof(Eshot_data); ++i) {
		if (Eshot_data[i].active) {
			drawFillCircle(Eshot_data[i].x, Eshot_data[i].y,
				5.0, 5.0,
				10,
				Color(1, 1, 1));
		}
	}
}