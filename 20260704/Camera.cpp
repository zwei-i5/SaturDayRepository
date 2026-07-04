#include "Camera.h"
#include"DxLib.h"
#include"Config.h"
//======================================
//コンストラクタ
//======================================
Camera::Camera()
{
	x = 0.0f;
}
//======================================
//更新
//======================================
void Camera::Update()
{
	//左
	if (CheckHitKey(KEY_INPUT_A)) { x -= GameConst::CAMERA_SPEED; }
	//右
	if (CheckHitKey(KEY_INPUT_D)) { x += GameConst::CAMERA_SPEED; }
	//画面外に出ないように制限
	if (x < 0) { x = 0; }
	if (x > GameConst::SCREEN_WIDTH) { x = GameConst::SCREEN_WIDTH; }
}
//======================================
//X座更新
//======================================
float Camera::GetX() const
{
	return x;
}