#pragma once
#include"setting.h"

const int EffectNum = 100;
extern int img[10];//最大１０コマ　画像

struct Effect
{
	double x1;
	double x2;
	double y1;
	double y2;
	double animeNo = 0;//何コマ目？
	int maxAnimeNo;//最大コマ数
	bool enable = false;//有効フラグ
};
extern Effect effe[EffectNum];//エフェクト用の変数

void initEffect();
void updateEffect();
void drawEffect();