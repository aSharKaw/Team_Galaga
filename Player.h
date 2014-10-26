#pragma once

//#include "lib/appEnv.hpp"
#include "Main.h"

class CPlayer
{
public:
	CPlayer();
	~CPlayer();

	Texture player_img;//プレイヤー画像

	float CPlayer_X;//プレイヤーX座標
	float CPlayer_Y;//プレイヤーY座標

	float spin;//トラクターくるくる

	//bool twin_player;//デュアルファイターチェック

	void Draw_player(bool twin_player, bool torakuta);//プレイヤー表示関数名
	//（デュアルチェック・トラクタチェック）
};
