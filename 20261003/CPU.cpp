#include "CPU.h"
#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;

CPU::CPU()
{

}

int CPU::Sethand()
{
	hand = rand() % 3;
	return hand;
}

void CPU::ShowHand(int h)
{
	switch (h)
	{
	case 0:
		cout << "CPU:グー" << endl;
		break;
	case 1:
		cout << "CPU:チョキ" << endl;
		break;
	case 2:
		cout << "CPU:パー" << endl;
		break;
	default:
		break;
	}
	
}
