#include "DxLib.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    ChangeWindowMode(TRUE);

    if (DxLib_Init() == -1)
        return -1;
    SetGraphMode(800, 600, 32);
    SetDrawScreen(DX_SCREEN_BACK);

    // 画像を読み込む
    int image[3];
    image[0] = LoadGraph("Image/character_monster_jackolantern_orange.png");
    image[1] = LoadGraph("Image/character_monster_jackolantern_green.png");
    image[2] = LoadGraph("Image/character_monster_jackolantern_purple.png");

    int click = 0;

    // 前フレームのマウス状態
    int prevMouse = 0;

    while (ProcessMessage() == 0)
    {
        ClearDrawScreen();

        // 現在のマウス状態
        int mouse = GetMouseInput();

        // 左クリックした瞬間だけ判定
        if ((mouse & MOUSE_INPUT_LEFT) &&
            !(prevMouse & MOUSE_INPUT_LEFT))
        {
            click++;

            // 3枚目まで行ったら最初に戻る
            if (click >= 3)
                click = 0;
        }

        // 現在の画像を表示
        DrawRotaGraph(400, 300,0.5,0, image[click], TRUE);

        // マウス状態を保存
        prevMouse = mouse;

        ScreenFlip();
    }

    DxLib_End();
    return 0;
}