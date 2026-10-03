#include<ctime>
#include<cstdlib>
#include"Game.h"
using namespace std;

int main()
{
	//乱数初期化
	srand(static_cast<unsigned int>(time(nullptr)));
	//ゲーム初期化
	Game game;
	//ゲームの開始
	game.Start();

	return 0;
}