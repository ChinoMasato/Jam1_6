#include"setting.h"

bool collision;
int playerhp;
int playershotdamage;
int pshotcooltime;
int invincibletime;
int enemy1hp;
int enemy2hp;

void initsetting(void)
{
	collision = false;    //�����蔻��
	playerhp = 2;         //�v���C���[��HP
	playershotdamage = 10;//�v���C���[�V���b�g�̃_���[�W
	pshotcooltime = 100;  //�v���[���[�V���b�g�̃N�[���^�C��
	invincibletime = 300; //�v���C���[�̖��G����
	enemy1hp = 30;        //�G1��HP
	enemy2hp = 30;        //�G2��HP
}