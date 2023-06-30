#include"setting.h"

bool collision;
int playerhp;
int playershotdamage1;
int playershotdamage2;
int pshotcooltime;
int invincibletime;
int enemy1hp;
int enemy2hp;
int hpuptime;

void initsetting(void)
{
	//�����蔻��
	collision = false;

	playerhp = 2;          //�v���C���[��HP
	playershotdamage1 = 20;//�v���C���[�V���b�g1�̃_���[�W
	playershotdamage2 = 1; //�v���C���[�V���b�g2�̃_���[�W
	pshotcooltime = 100;   //�v���[���[�V���b�g�̃N�[���^�C��
	invincibletime = 300;  //�v���C���[�̖��G����
	enemy1hp = 60;         //�G1��HP
	enemy2hp = 60;         //�G2��HP
}
void updatesetting(void)
{
	if (CheckHitKey(KEY_INPUT_J) == 1)
	{
		collision = true;
	}
	if (CheckHitKey(KEY_INPUT_K) == 1)
	{
		collision = false;
	}
	if (CheckHitKey(KEY_INPUT_UP) == 1)
	{
		hpuptime++;
		if (hpuptime == 50)
		{
			p.hp += 1;
			hpuptime = 0;
		}
	}
	else if (CheckHitKey(KEY_INPUT_DOWN) == 1)
	{
		hpuptime--;
		if (hpuptime == -50)
		{
			p.hp -= 1;
			hpuptime = 0;
		}
	}
	else
	{
		hpuptime = 0;
	}
	if (p.hp > 0)
	{
		p.enable = true;
		gameoverflag = false;
	}
}