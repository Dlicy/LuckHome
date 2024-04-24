#include "../luckyhome/Halfcoconut.h"

Halfcoconut::Halfcoconut() : Thing() {
    setPrice(1);
    setName("halfcoconut");
    setDescribe("��ֵ1ö���,�����������4���");
}

int Halfcoconut::calculateMoney(std::vector<Thing*>* category, std::vector<Thing*>* playerItem, int j) {
    int value = 1;
    int length = (*playerItem).size();
    for (int i = 0; i < 20; i++) {
        if ((*category)[i]->getName() == "monkey" && isNear(i, j)) {
            value += 4;
            //delete (*category)[i];//�ͷ�ָ��
            (*category)[i] = new Empty(); // ��������
            for (int x = 0; x < length; ++x) {
                if ((*playerItem)[x]->getName() == "halfcoconut")
                {
                    (*playerItem).erase((*playerItem).begin() + x);
                    break;
                }
            }
        }
    }
    return value;
}

Halfcoconut* Halfcoconut::createNewItem() {
    return new Halfcoconut();
}

bool Halfcoconut::isNear(int position1, int position2) {
    if (abs(position1 - position2) == 6 || abs(position1 - position2) == 5 || abs(position1 - position2) == 4 || abs(position1 - position2) == 1)
        return true;
    return false;
}

//void Halfcoconut::setPosition(int newposition) {
//    // ��ȡλ�õ��߼�ʵ��
//    // ����λ��ֵ
//    position = newposition;
//}