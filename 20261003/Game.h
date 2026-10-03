#pragma once
#include"Player.h"
#include"CPU.h"
#include"Judge.h"
class Game
{
private:
	Player player;
	CPU cpu;
	Judge judge;
public:
	Game();
	void Start();
};

