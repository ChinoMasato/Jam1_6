#pragma once
#include"DxLib.h"

struct circle
{
	double x;
	double y;
	double s;
	int r;
	int c;
	bool fill;
	bool enable;
	int hp;//���@�̎c�@�ƓG�̗̑�
	int damage;//�G�̗̑͂���������ꍇ�̎��@�̋ʂ̃_���[�W
	int time;//���G���ԂȂǂŎg�p
};

bool ishit(circle c1, circle c2);