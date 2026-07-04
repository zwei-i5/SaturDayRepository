#include "Game.h"
#include"DxLib.h"
//==============================
//初期化
//==============================
void Game::Init()
{
	//-----------------------------
	//背景初期化
	//-----------------------------
	background_Init();
	//オブジェクト配置
	objects.emplace_back(100, 300);
	objects.emplace_back(500, 300);
	objects.emplace_back(1000, 300);
	objects.emplace_back(1500, 300);
}

//==================================
//更新
//==================================
void Game::Update()
{
	//
}