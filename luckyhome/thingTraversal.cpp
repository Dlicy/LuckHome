#include "../luckyhome/thingTraversal.h"

void thingTraversal(vector<Thing*>* initalizeItem, vector<Thing*>* punchboardItem, vector<Props*>* playerScene,  vector<Thing*>* playerItem, vector<Essence*>* playerEssence, int* dailyMoney)
{
	int length = (*punchboardItem).size();
		for (int j = 0; j < length; j++)
		{
			//���ö������ͣ���Ϊ�ж���麯������
			//��һ��
			*dailyMoney += ((*punchboardItem)[j] -> calculateMoney((*punchboardItem)));

			((*punchboardItem)[j]->calculateMoney((*punchboardItem)));

			*dailyMoney += ((*punchboardItem)[j]->calculateMoney((*punchboardItem), j));

			((*punchboardItem)[j]->calculateMoney((*punchboardItem), j));
			//�ڶ���
			*dailyMoney += ((*punchboardItem)[j]->calculateMoney(punchboardItem));

			((*punchboardItem)[j]->calculateMoney(punchboardItem));
			*dailyMoney += ((*punchboardItem)[j]->calculateMoney(punchboardItem, j));

			((*punchboardItem)[j]->calculateMoney(punchboardItem, j));
			//������
			*dailyMoney += ((*punchboardItem)[j]->calculateMoney(punchboardItem, playerItem));

			(*punchboardItem)[j]->calculateMoney(punchboardItem, playerItem);

			*dailyMoney += ((*punchboardItem)[j]->calculateMoney(punchboardItem, playerItem, j));

			(*punchboardItem)[j]->calculateMoney(punchboardItem, playerItem, j);
			//������
			*dailyMoney += ((*punchboardItem)[j]->calculateMoney(punchboardItem,playerScene,playerItem,playerEssence, j));

			(*punchboardItem)[j]->calculateMoney(punchboardItem, playerScene, playerItem, playerEssence, j);
			//������
			*dailyMoney += ((*punchboardItem)[j]->calculateMoney(punchboardItem, (*punchboardItem)[j]->getCounter(), (*punchboardItem)[j]->getCounter_now(), j));

			((*punchboardItem)[j]->calculateMoney(punchboardItem, (*punchboardItem)[j]->getCounter(), (*punchboardItem)[j]->getCounter_now(), j));

		}
		return;
}