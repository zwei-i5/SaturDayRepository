#include "Game.h"
#include<iostream>
using namespace std;

Game::Game()
{

}
void Game::Start()
{
	cout << "==============================================\n";
	cout << "　　　　　　   ジャンケンゲーム\n";
	cout << "==============================================\n";
	cout << "出す手を入力してください(0:グー 1:チョキ 2:パー)" << endl;
	while (true)
	{
		//プレイヤー、CPUの手の生成・入力
		int playerhand = player.SetHand();
		player.ShowHand(playerhand);
		int cpuhand = cpu.Sethand();
		cpu.ShowHand(cpuhand);
		//勝敗判定
		if (judge.playerWin(playerhand, cpuhand))
		{
			break;
		}
		else
		{
			continue;
		}
	}
}
	
