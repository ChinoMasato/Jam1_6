#include"setting.h"

bool collision;
int playerhp;
int playershotdamage1;
int playershotdamage2;
int pshotcooltime;
int invincibletime;
int enemy1hp;
double enemy1r;
double enemynum1x[enemynum1];
double enemynum1y[enemynum1];
int enemy2hp;
double enemy2r;
double enemynum2x[enemynum2];
double enemynum2y[enemynum2];
int enemy3hp;
double enemy3r;
double enemynum3x[enemynum3];
double enemynum3y[enemynum3];
int enemy4hp;
double enemy4r;
double enemynum4x[enemynum4];
double enemynum4y[enemynum4];
int enemy5hp;
double enemy5r;
double enemynum5x[enemynum5];
double enemynum5y[enemynum5];
int bosshp;
double bossr;
double bossx;
double bossy;

int hpuptime;
void initsetting(void)
{
	collision = false;	   //�����蔻��
	playerhp = 3;          //�v���C���[��HP
	playershotdamage1 = 20;//�v���C���[�V���b�g1�̃_���[�W
	playershotdamage2 = 1; //�v���C���[�V���b�g2�̃_���[�W
	pshotcooltime = 100;   //�v���[���[�V���b�g�̃N�[���^�C��
	invincibletime = 300;  //�v���C���[�̖��G����
	enemy1hp = 60;         //�G1��HP
	enemy2hp = 60;         //�G2��HP
	enemy3hp = 60;         //�G3��HP
	enemy4hp = 60;         //�G4��HP
	enemy5hp = 60;         //�G5��HP
	bosshp = 100;          //�{�X��HP
	enemy1r = 25;          //�G1�̔��a
	enemy2r = 35;          //�G2�̔��a
	enemy3r = 45;          //�G3�̔��a
	enemy4r = 55;          //�G4�̔��a
	enemy5r = 65;          //�G5�̔��a
	bossr = 100;           //�{�X�̔��a
	//�G1�̍��W
	enemynum1x[0] = 900;
	enemynum1y[0] = 300;
	enemynum1x[1] = 1000;
	enemynum1y[1] = 300;
	enemynum1x[2] = 1100;
	enemynum1y[2] = 300;
	enemynum1x[3] = 1200;
	enemynum1y[3] = 300;
	enemynum1x[4] = 1300;
	enemynum1y[4] = 300;
	enemynum1x[5] = 1400;
	enemynum1y[5] = 300;
	enemynum1x[6] = 1500;
	enemynum1y[6] = 300;
	enemynum1x[7] = 1600;
	enemynum1y[7] = 300;
	enemynum1x[8] = 1700;
	enemynum1y[8] = 300;
	enemynum1x[9] = 1800;
	enemynum1y[9] = 300;
	//�G2�̍��W
	enemynum2x[0] = 900;
	enemynum2y[0] = 300;
	enemynum2x[1] = 1000;
	enemynum2y[1] = 300;
	enemynum2x[2] = 1100;
	enemynum2y[2] = 300;
	enemynum2x[3] = 1200;
	enemynum2y[3] = 300;
	enemynum2x[4] = 1300;
	enemynum2y[4] = 300;
	enemynum2x[5] = 1400;
	enemynum2y[5] = 300;
	enemynum2x[6] = 1500;
	enemynum2y[6] = 300;
	enemynum2x[7] = 1600;
	enemynum2y[7] = 300;
	enemynum2x[8] = 1700;
	enemynum2y[8] = 300;
	enemynum2x[9] = 1800;
	enemynum2y[9] = 300;
	//�G3�̍��W
	enemynum3x[0] = 900;
	enemynum3y[0] = 300;
	enemynum3x[1] = 1000;
	enemynum3y[1] = 300;
	enemynum3x[2] = 1100;
	enemynum3y[2] = 300;
	enemynum3x[3] = 1200;
	enemynum3y[3] = 300;
	enemynum3x[4] = 1300;
	enemynum3y[4] = 300;
	enemynum3x[5] = 1400;
	enemynum3y[5] = 300;
	enemynum3x[6] = 1500;
	enemynum3y[6] = 300;
	enemynum3x[7] = 1600;
	enemynum3y[7] = 300;
	enemynum3x[8] = 1700;
	enemynum3y[8] = 300;
	enemynum3x[9] = 1800;
	enemynum3y[9] = 300;
	//�G4�̍��W
	enemynum4x[0] = 900;
	enemynum4y[0] = 300;
	enemynum4x[1] = 1000;
	enemynum4y[1] = 300;
	enemynum4x[2] = 1100;
	enemynum4y[2] = 300;
	enemynum4x[3] = 1200;
	enemynum4y[3] = 300;
	enemynum4x[4] = 1300;
	enemynum4y[4] = 300;
	enemynum4x[5] = 1400;
	enemynum4y[5] = 300;
	enemynum4x[6] = 1500;
	enemynum4y[6] = 300;
	enemynum4x[7] = 1600;
	enemynum4y[7] = 300;
	enemynum4x[8] = 1700;
	enemynum4y[8] = 300;
	enemynum4x[9] = 1800;
	enemynum4y[9] = 300;
	//�G5�̍��W
	enemynum5x[0] = 900;
	enemynum5y[0] = 300;
	enemynum5x[1] = 1000;
	enemynum5y[1] = 300;
	enemynum5x[2] = 1100;
	enemynum5y[2] = 300;
	enemynum5x[3] = 1200;
	enemynum5y[3] = 300;
	enemynum5x[4] = 1300;
	enemynum5y[4] = 300;
	enemynum5x[5] = 1400;
	enemynum5y[5] = 300;
	enemynum5x[6] = 1500;
	enemynum5y[6] = 300;
	enemynum5x[7] = 1600;
	enemynum5y[7] = 300;
	enemynum5x[8] = 1700;
	enemynum5y[8] = 300;
	enemynum5x[9] = 1800;
	enemynum5y[9] = 300;
	//�{�X�̍��W
	bossx = 1000;
	bossy = 300;
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