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
	playerhp = 6;          //�v���C���[��HP
	playershotdamage1 = 30;//�v���C���[�V���b�g1�̃_���[�W
	playershotdamage2 = 1; //�v���C���[�V���b�g2�̃_���[�W
	pshotcooltime = 75;   //�v���[���[�V���b�g�̃N�[���^�C��
	invincibletime = 500;  //�v���C���[�̖��G����
	enemy1hp = 75;         //�G1��HP
	enemy2hp = 100;         //�G2��HP
	enemy3hp = 150;         //�G3��HP
	enemy4hp = 200;         //�G4��HP
	enemy5hp = 150;         //�G5��HP
	bosshp = 1000;          //�{�X��HP
	enemy1r = 25;          //�G1�̔��a
	enemy2r = 35;          //�G2�̔��a
	enemy3r = 45;          //�G3�̔��a
	enemy4r = 55;          //�G4�̔��a
	enemy5r = 65;          //�G5�̔��a
	bossr = 100;           //�{�X�̔��a
	//�G1�̍��W
	enemynum1x[0] = 1300;
	enemynum1y[0] = 200;
	enemynum1x[1] = 1600;
	enemynum1y[1] = 450;
	enemynum1x[2] = 1900;
	enemynum1y[2] = 250;
	enemynum1x[3] = 2100;
	enemynum1y[3] = 400;
	enemynum1x[4] = 2400;
	enemynum1y[4] = 150;
	enemynum1x[5] = 2700;
	enemynum1y[5] = 350;
	enemynum1x[6] = 3000;
	enemynum1y[6] = 450;
	enemynum1x[7] = 3300;
	enemynum1y[7] = 200;
	enemynum1x[8] = 3600;
	enemynum1y[8] = 150;
	enemynum1x[9] = 4000;
	enemynum1y[9] = 500;
	//�G2�̍��W
	enemynum2x[0] = 1000;
	enemynum2y[0] = 550;
	enemynum2x[1] = 1250;
	enemynum2y[1] = 285;
	enemynum2x[2] = 1500;
	enemynum2y[2] = 400;
	enemynum2x[3] = 1800;
	enemynum2y[3] = 350;
	enemynum2x[4] = 2050;
	enemynum2y[4] = 500;
	enemynum2x[5] = 2300;
	enemynum2y[5] = 320;
	enemynum2x[6] = 2500;
	enemynum2y[6] = 150;
	enemynum2x[7] = 2600;
	enemynum2y[7] = 350;
	enemynum2x[8] = 2850;
	enemynum2y[8] = 450;
	enemynum2x[9] = 3000;
	enemynum2y[9] = 250;
	//�G3�̍��W
	enemynum3x[0] = 1300;
	enemynum3y[0] = 200;
	enemynum3x[1] = 1600;
	enemynum3y[1] = 450;
	enemynum3x[2] = 1900;
	enemynum3y[2] = 250;
	enemynum3x[3] = 2100;
	enemynum3y[3] = 400;
	enemynum3x[4] = 2300;
	enemynum3y[4] = 150;
	enemynum3x[5] = 2500;
	enemynum3y[5] = 350;
	enemynum3x[6] = 2700;
	enemynum3y[6] = 450;
	enemynum3x[7] = 2900;
	enemynum3y[7] = 200;
	enemynum3x[8] = 3100;
	enemynum3y[8] = 150;
	enemynum3x[9] = 3300;
	enemynum3y[9] = 500;
	//�G4�̍��W
	enemynum4x[0] = 1000;
	enemynum4y[0] = 550;
	enemynum4x[1] = 1250;
	enemynum4y[1] = 285;
	enemynum4x[2] = 1500;
	enemynum4y[2] = 400;
	enemynum4x[3] = 1800;
	enemynum4y[3] = 350;
	enemynum4x[4] = 2050;
	enemynum4y[4] = 500;
	enemynum4x[5] = 2300;
	enemynum4y[5] = 320;
	enemynum4x[6] = 2500;
	enemynum4y[6] = 150;
	enemynum4x[7] = 2600;
	enemynum4y[7] = 350;
	enemynum4x[8] = 2850;
	enemynum4y[8] = 450;
	enemynum4x[9] = 3000;
	enemynum4y[9] = 250;
	//�G5�̍��W
	enemynum5x[0] = 1300;
	enemynum5y[0] = 200;
	enemynum5x[1] = 1820;
	enemynum5y[1] = 450;
	enemynum5x[2] = 2150;
	enemynum5y[2] = 250;
	enemynum5x[3] = 2400;
	enemynum5y[3] = 400;
	enemynum5x[4] = 2850;
	enemynum5y[4] = 150;
	enemynum5x[5] = 3100;
	enemynum5y[5] = 350;
	enemynum5x[6] = 3250;
	enemynum5y[6] = 450;
	enemynum5x[7] = 3600;
	enemynum5y[7] = 200;
	enemynum5x[8] = 3750;
	enemynum5y[8] = 150;
	enemynum5x[9] = 4000;
	enemynum5y[9] = 500;
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
		if (hpuptime == 100 && score >= 50)
		{
			score -= 50;
			p.hp += 1;
			hpuptime = 0;
		}
	}
	else if (CheckHitKey(KEY_INPUT_DOWN) == 1)
	{
		hpuptime--;
		if (hpuptime == -100 && p.hp > 1)
		{
			p.hp -= 1;
			hpuptime = 0;
			for (int i = 0; i < playershotnum; i++)
			{
				pshot1[i].damage += playershotdamage1 / 5;
				pshot2[i].damage += 0.5;

			}
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