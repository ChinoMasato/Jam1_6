#pragma once
#include"setting.h"

const int EffectNum = 100;
extern int img[10];//�ő�P�O�R�}�@�摜

struct Effect
{
	double x1;
	double x2;
	double y1;
	double y2;
	double animeNo = 0;//���R�}�ځH
	int maxAnimeNo;//�ő�R�}��
	bool enable = false;//�L���t���O
};
extern Effect effe[EffectNum];//�G�t�F�N�g�p�̕ϐ�

void initEffect();
void updateEffect();
void drawEffect();