#pragma once
class Map
{
private:
	float worldX;
	float worldY;
public:
	//==============================
	//コンストラクタ
	//==============================
	Map(float worldX, float WorldY);
	//==============================
	//描画
	//==============================
	void Draw(float cameraX);
};

