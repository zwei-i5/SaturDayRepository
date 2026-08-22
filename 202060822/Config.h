#pragma once

namespace Config
{
	//========================================
	//ウィンドウ
	// =======================================
	
	//サイズ
	constexpr int WINDOW_WIDTH = 1440;
	constexpr int WINDOW_HEIGHT = 900;
	//ビットサイズ
	constexpr int COLOR_BIT = 16;

	//========================================
	//マップ
	//========================================

	constexpr int MAP_CHIP_SIZE = 64;
	constexpr int MAP_X_NUM = 16;
	constexpr int MAP_Y_NUM = 12;

	//マップ画像
	constexpr int MAP_IMG_X_NUM = 2;
	constexpr int MAP_IMG_Y_NUM = 1;

	constexpr const char* MAP_IMAGE_PATH = "img/map.png";

	//========================================
	//プレイヤー
	//========================================

	//開始位置
	constexpr float PLAYER_START_X = 100.0f;
	constexpr float PLAYER_START_Y = 100.0f;
	//移動速度
	constexpr float PLAYER_MOVE_SPEED = 100.0f;
	//画像サイズ
	constexpr int PLAYER_IMAGE_SIZE_X = 64;
	constexpr int PLAYER_IMAGE_SIZE_Y = 96;
	//プレイヤー当たり判定
	constexpr int PLAYER_HIT_SIZE_X = 40;
	constexpr int PLAYER_HIT_SIZE_Y = 64;

	//=======================================
	//アニメーション
	//=======================================

	constexpr int ANIM_PATTERN_NUM = 3;
	constexpr int ANIM_TYPE_NUM = 4;

	constexpr float ANIMATION_FPS = 6.0f;

	constexpr const char* PLAYER_IMAGE_PATH = "img/chara.png";
}
