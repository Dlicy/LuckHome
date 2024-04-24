#include"../luckyhome/Props.h"
#include"../luckyhome/LockRemover.h"
using namespace std;
/*
���ȼ� 1 ֻ���ܲ�����һ��߱�������
���ȼ� 2 ��ʹ������Ʒ��ֵ���ǲ���ʧ��
���ȼ� 3 ������������Ʒ��
���ȼ� 4 �ܲ�����Ʒ��*/
LockRemover:: LockRemover()  {
	setName("������");
	setPrice(3);
	setNumber(3);
	setDescribe("�����䣬�����䣬����;޴�����35%�ļ��ʱ�������");
	setCounter(-1);//����ǰ�����ǲ�ɾ������Զ���ڵ�
	setAccumulator(0);
};

int LockRemover::calculateMoney(vector<Thing*>* category, vector<Thing*>* playerItem) {
    int value = 0;
    int length = (*playerItem).size();
    for (int i = 0; i < 20; i++) {
        
        //����
        if ((*category)[i]->getName() == "treasure") {
            // ʹ�õ�ǰʱ����Ϊ����
            std::time_t seed = std::time(nullptr);

            // ���������������
            std::mt19937 gen(seed);

            // ����һ�����ȷֲ��������ֲ�������Χ�� [minx, maxx]
            int minx = 1;
            int maxx = 100;
            std::uniform_int_distribution<int> dist(minx, maxx);
            //���������
            int randomNum = dist(gen);
            if (randomNum <= 35) {
                value += 50;
                //delete (*category)[i];//�ͷ�ָ��
                (*category)[i] = new Empty();//ָ����ַ�
                for (int x = 0; x < length; ++x) {
                    if ((*playerItem)[x]->getName() == "treasure")
                    {
                        (*playerItem).erase((*playerItem).begin() + x);
                        break;
                    }
                }
            }
        }
        
        //����
        if ((*category)[i]->getName() == "lockbox") {
            // ʹ�õ�ǰʱ����Ϊ����
            std::time_t seed = std::time(nullptr);

            // ���������������
            std::mt19937 gen(seed);

            // ����һ�����ȷֲ��������ֲ�������Χ�� [minx, maxx]
            int minx = 1;
            int maxx = 100;
            std::uniform_int_distribution<int> dist(minx, maxx);
            //���������
            int randomNum = dist(gen);
            if (randomNum <= 35) {
                value += 15;
                //delete category[i];//�ͷ�ָ��
                (*category)[i] = new Empty();//ָ����ַ�
                for (int x = 0; x < length; ++x) {
                    if ((*playerItem)[x]->getName() == "lockbox")
                    {
                        (*playerItem).erase((*playerItem).begin() + x);
                        break;
                    }
                }
            }
        }

        //������
        if ((*category)[i]->getName() == "steelsafe") {
            // ʹ�õ�ǰʱ����Ϊ����
            std::time_t seed = std::time(nullptr);

            // ���������������
            std::mt19937 gen(seed);

            // ����һ�����ȷֲ��������ֲ�������Χ�� [minx, maxx]
            int minx = 1;
            int maxx = 100;
            std::uniform_int_distribution<int> dist(minx, maxx);
            //���������
            int randomNum = dist(gen);
            if (randomNum <= 35) {
                value += 30;
                //delete category[i];//�ͷ�ָ��
                (*category)[i] = new Empty();//ָ����ַ�
                for (int x = 0; x < length; ++x) {
                    if ((*playerItem)[x]->getName() == "steelsafe")
                    {
                        (*playerItem).erase((*playerItem).begin() + x);
                        break;
                    }
                }
            }
        }

        //�޴���
        if ((*category)[i]->getName() == "hugetreasure") {
            // ʹ�õ�ǰʱ����Ϊ����
            std::time_t seed = std::time(nullptr);

            // ���������������
            std::mt19937 gen(seed);

            // ����һ�����ȷֲ��������ֲ�������Χ�� [minx, maxx]
            int minx = 1;
            int maxx = 100;
            std::uniform_int_distribution<int> dist(minx, maxx);
            //���������
            int randomNum = dist(gen);
            if (randomNum <= 35) {
                value += 100;
                //delete category[i];//�ͷ�ָ��
                (*category)[i] = new Empty();//ָ����ַ�
                for (int x = 0; x < length; ++x) {
                    if ((*playerItem)[x]->getName() == "hugetreasure")
                    {
                        (*playerItem).erase((*playerItem).begin() + x);
                        break;
                    }
                }
            }
        }
    }
    return value;
}

LockRemover* LockRemover::createNewItem() {
	return new LockRemover();
}