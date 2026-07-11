#include"DxLib.h"
#include"Game.h"
#include"Config.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	ChangeWindowMode(TRUE);
	SetWindowSize(GameConst::SCREEN_WIDTH,GameConst::SCREEN_HEIGHT);
	DxLib_Init();
	if (DxLib_Init() == -1) return -1;
	SetDrawScreen(DX_SCREEN_BACK);
	SetFontSize(20);

	Game game;

	game.Init();


	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		game.Update();

		ClearDrawScreen();

		game.Draw();

		ScreenFlip();
	}
	DxLib_End();

	return 0;
}