#include"game.h"

int white;
bool gameoverflag;

void initgame(void)
{
	white = GetColor(255, 255, 255);
	gameoverflag = false;
}
void updategame(void)
{
	if (p.hp == 0)
	{
		gameoverflag = true;
		p.enable = false;
	}
}
void drawgame(void)
{
	DrawFormatString(100, 100, white, "�̗�%d", p.hp);
	DrawFormatString(100, 150, white, "���G����%d", p.time);
	DrawFormatString(100, 200, white, "�N�[���^�C��%d", pshot[0].time);
}