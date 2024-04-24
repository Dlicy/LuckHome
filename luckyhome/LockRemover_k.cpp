#include "../luckyhome/LockRemover_k.h"

LockRemover_k::LockRemover_k() {
    setName("������");
    setPrice(3);
    setNumber(3);
    setDescribe("��3�������䣬�����䣬����;޴��䱻�������������������䣬�����䣬����;޴�����100%�ļ��ʱ�������");
    setCounter(3); // ����ǰ������������3�ξ�ɾ��
    setAccumulator(0);
}

int LockRemover_k::calculateMoney(vector<Thing*>* category, vector<Thing*>* playerItem) {
    int value = 0;
    int length = (*playerItem).size();
    for (int i = 0; i < 20; i++) {

        //����
        if ((*category)[i]->getName() == "treasure") {
             
             if (getAccumulator() < 3) {
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
                setAccumulator(getAccumulator() + 1);
             }
             
        }

        //����
        if ((*category)[i]->getName() == "lockbox") {
            
            if (getAccumulator() < 3) {
                value += 15;
                //delete (*category)[i];//�ͷ�ָ��
                (*category)[i] = new Empty();//ָ����ַ�
                for (int x = 0; x < length; ++x) {
                    if ((*playerItem)[x]->getName() == "lockbox")
                    {
                        (*playerItem).erase((*playerItem).begin() + x);
                        break;
                    }
                }
                setAccumulator(getAccumulator() + 1);
            }
        }

        //������
        if ((*category)[i]->getName() == "steelsafe") {

            
            if (getAccumulator() < 3) {
                value += 30;
                //delete (*category)[i];//�ͷ�ָ��
                (*category)[i] = new Empty();//ָ����ַ�
                for (int x = 0; x < length; ++x) {
                    if ((*playerItem)[x]->getName() == "steelsafe")
                    {
                        (*playerItem).erase((*playerItem).begin() + x);
                        break;
                    }
                }
                setAccumulator(getAccumulator() + 1);
            }
        }

        //�޴���
        if ((*category)[i]->getName() == "hugetreasure") {
            
            if (getAccumulator() < 3) {
                value += 100;
                //delete (*category)[i];//�ͷ�ָ��
                (*category)[i] = new Empty();//ָ����ַ�
                for (int x = 0; x < length; ++x) {
                    if ((*playerItem)[x]->getName() == "hugetreasure")
                    {
                        (*playerItem).erase((*playerItem).begin() + x);
                        break;
                    }
                }
                setAccumulator(getAccumulator() + 1);
            }
        }
    }
    return value;
}

/*bool LockRemover_k::Dodelete() {
    if (this->Accumulator == this->counter) {
        return 1;
    }
    return 0;
}*/

LockRemover_k* LockRemover_k::createNewItem() {
    return new LockRemover_k();
}