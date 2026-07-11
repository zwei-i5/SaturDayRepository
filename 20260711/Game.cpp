#include "Game.h"
#include"Config.h"
#include"DxLib.h"

void Game::Init()
{

	//=============================
	//分割画像の読み込み
	//=============================
	LoadDivGraph("Image/AnimationPlayer1.png",
		Config::PLAYER_TOTAL_FRAMES,
		Config::PLAYER_COL,
		Config::PLAYER_ROW,
		Config::PLAYER_WIDTH,
		Config::PLAYER_HEIGHT,
		images);

	//===============================
	//アニメーションに分割画像を設定
	//===============================
	animations.SetImages(images);

	currentAnim = AnimationType::Idle;
	PlayerAnimation(currentAnim);
	oldSpace = false;
}

void Game::Update()
{

	//=============================
	//フレームマネージャー更新
	//=============================
	frameManager.Update();

	//=============================
	//スペースキーの押下判定
	//=============================
	bool nowSpace = (CheckHitKey(KEY_INPUT_SPACE));
	//スペースを押された瞬間にアニメーションを切り替える
	if (nowSpace && !oldSpace)
	{
		switch (currentAnim)
		{
		case AnimationType::Idle:
			currentAnim = AnimationType::Walk;
			break;
		case AnimationType::Walk:
			currentAnim = AnimationType::Run;
			break;
		case AnimationType::Run:
			currentAnim = AnimationType::Jump;
			break;
		case AnimationType::Jump:
			currentAnim = AnimationType::Idle;
			break;
		default:
			break;
		}
		//アニメーション切り替え
		PlayerAnimation(currentAnim);
	}
}
void Game::Draw()
{

	DrawGraph(Config::PLAYER_DRAW_X,
		Config::PLAYER_DRAW_Y,
		animations.GetImage(frameManager.GetFrameCounter()),
		TRUE);

	DrawFormatString(
		20,
		20,
		GetColor(255, 255, 255),
		"Frame : %d",
		frameManager.GetFrameCounter());
}

void Game::PlayerAnimation(AnimationType type)
{
	int row = static_cast<int>(type);

	int startFrame = row * Config::PLAYER_COL;

	int speed = Config::IDLE_SPEED;
	switch (type)
	{
	case AnimationType::Idle:
		speed = Config::IDLE_SPEED;
		break;
	case AnimationType::Walk:
		speed = Config::IDLE_SPEED;
		break;
	case AnimationType::Run:
		speed = Config::IDLE_SPEED;
		break;
	case AnimationType::Jump:
		speed = Config::IDLE_SPEED;
		break;

	}

	animations.Play(startFrame, Config::PLAYER_COL, speed);
}

