#include<iostream>
using namespace std;
class Player
{
public:
	int hp = 100;

	void Damage()
	{
		hp -= 2;
		cout << "ダメージを食らいました" << endl;
	}
};

int main()
{
	//Playerオブジェクトをインスタンス化
	Player player;
	cout << "PlayerHP:" << player.hp << endl;

	//Playerのオブジェクトのアドレスをポインタに保存する
	Player* pPlayer = &player;

	//ポインタを使ってDamage関数を呼び出すこともできる
	pPlayer->Damage();

	cout << "PlayerHP:" << player.hp << endl;

	return 0;
}