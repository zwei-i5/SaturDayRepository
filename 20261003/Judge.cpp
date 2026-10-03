#include "Judge.h"
#include<iostream>
using namespace std;


Judge::Judge()
{
	judge;
}
bool Judge::playerWin(int p, int c)
{
	judge = p - c;
	if (-1 == judge || judge == -2)
	{
		cout << "PLAYER WIN!!" << endl;
		return true;
	}
	else if (judge == 0)
	{
		cout << "‚ ‚¢‚±‚Å‚·B" << endl;
		return false;
	}
	else
	{
		cout << "CPU WIN!!" << endl;
		return true;
	}
}

