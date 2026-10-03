#include "Player.h"
#include<iostream>
using namespace std;

Player::Player()
{
	hand;
}

int Player::SetHand()
{
	while (true)
	{
		cin >> hand;
		if (0 > hand || 2 < hand)
		{
			cout << "再入力" << endl;
		}
		else
		{
			break;
		}
	}
	return hand;
}

void Player::ShowHand(int h)
{
	switch (h)
	{
	case 0:
		cout << "Player:グー" << endl;
		break;
	case 1:
		cout << "Player:チョキ" << endl;
		break;
	case 2:
		cout << "Player:パー" << endl;
		break;
	}
}