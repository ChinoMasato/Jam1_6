#pragma once
#include"setting.h"

struct stage
{
	int stageimg;
	double x;
	double y;
};

enum stagetype
{
	ST1,
	ST2,
	ST3,
	ST4,
	ST5,
	STB
};

extern stagetype STtype;

extern stage stage1[2];
extern stage stage2[2];
extern stage stage3[2];
extern stage stage4[2];
extern stage stage5;
extern stage stageboss;
const int changenum = 255;
extern circle cs[changenum];

void initstage(void);
void updatestage(void);
void drawstage(void);
void initchangestage(void);
void updatechangestage(void);
void drawchangestage(void);