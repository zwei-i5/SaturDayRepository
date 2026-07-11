#include"DxLib.h"
#include"Game.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE hPrevInstance, LPSTR IpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);
	SetWindowSize(Config::WINDOW_WIDTH, Config::WINDOW_HEIGHT);
	//初期化
	if (DxLib_Init() == -1) { return  -1;}
	SetDrawScreen(DX_SCREEN_BACK);

	Game game;

	game.Init();
	//メインループ
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		//Clear the screen
		ClearDrawScreen();
		//ゲームの更新
		game.Update();
		//ゲームの描画
		game.Draw();

		ScreenFlip();
	}
	DxLib_End();
	return 0;
}