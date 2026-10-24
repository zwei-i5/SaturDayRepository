#include "Map.h"
#include<fstream>
#include"DxLib.h"

Map::Map():mapXNum(0),mapYNum(0),IsInitialized(false)
{
	for (int i = 0; i < Config::MAP_CHIP_IMAGE_COUNT; i++)
	{
		chipImages[i] = -1;
	}
}





Map::~Map()
{
	Finalize();
}

//初期化
bool Map::Init()
{
	Finalize();

	//画像チップを分割して読み込み
	if (LoadDivGraph(Config::MAP_CHIP_IMAGE_PATH,
		Config::MAP_CHIP_IMAGE_COUNT,
		Config::MAP_CHIP_IMAGE_COLUMNS,
		Config::MAP_CHIP_IMAGE_ROWS,
		Config::MAP_CHIP_SIZE, Config::MAP_CHIP_SIZE, chipImages) == -1)
	{
		Finalize();
		return false;
	}
//csvファイル読み込み
	if (!LoadMap(Config::MAP_BACK_CSV_PATH, backMap) ||
		!LoadMap(Config::MAP_BASE_CSV_PATH, baseMap) ||
		!LoadMap(Config::MAP_NEAR_CSV_PATH, nearMap))
	{
		Finalize();
		return false;
	}
}

//マップ読み込み
