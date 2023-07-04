#include "effect.h"

Effect effe[EffectNum];//�G�t�F�N�g�p�̕ϐ�
int img[10];//�ő�P�O�R�}�@�摜

void initEffect()
{
	//�摜�̓ǂݍ���
	LoadDivGraph("effect04.png", 5, 5, 1, 120, 120, img);
}
void updateEffect()
{
	for (int i = 0; i < EffectNum; i++) {
		if (effe[i].enable == true)
		{
			//�A�j���[�V������i�߂�
			effe[i].animeNo = effe[i].animeNo + 0.1;
			//�U�R�}�ڂɂȂ�����I��
			if ((int)(effe[i].animeNo) > 5) {
				effe[i].enable = false;
			}
		}
	}
}
void drawEffect()
{
	for (int i = 0; i < EffectNum; i++) {
		if (effe[i].enable == true)
		{
			int no = effe[i].animeNo;
			DrawExtendGraph(effe[i].x1, effe[i].y1, effe[i].x2, effe[i].y2,img[no], true);
		}
	}
}