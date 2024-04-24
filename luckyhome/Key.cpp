#include "../luckyhome/Key.h"

Key::Key() {
    setPrice(3);
    setName("key");
    setDescribe("��ֵ1ö���,�����������ڵĲƱ���");
}

int Key::calculateMoney(std::vector<Thing*>* category, std::vector<Thing*>* playerItem, int j) {
    int value = 1;
    int length = (*playerItem).size();
    for (int i = 0; i < 20; i++) {
        if ((*category)[i]->getName() == "treasure" && isNear(i, j)) {
            value += 50;
            //delete (*category)[i];//�ͷ�ָ��
            (*category)[i] = new Empty();
            // OwnPosition �����Ԫ���Լ���λ��
            //int OP = (position.getRow() * 5) + position.getColumn();
            //category[OP] = new Empty();
            for (int x = 0; x < length; ++x) {
                if ((*playerItem)[x]->getName() == "treasure")
                {
                    (*playerItem).erase((*playerItem).begin() + x);
                    break;
                }
            }
            break;
        }
        else if ((*category)[i]->getName() == "lockbox" && isNear(i, j)) {
            value += 15;
            //delete (*category)[i];//�ͷ�ָ��
            (*category)[i] = new Empty();
            // OwnPosition �����Ԫ���Լ���λ��
            //int OP = (position.getRow() * 5) + position.getColumn();
            //category[OP] = new Empty();
            for (int x = 0; x < length; ++x) {
                if ((*playerItem)[x]->getName() == "lockbox")
                {
                    (*playerItem).erase((*playerItem).begin() + x);
                    break;
                }
            }
            break;
        }
        else if ((*category)[i]->getName() == "hugetreasure" && isNear(i, j)) {
            value += 100;
            //delete (*category)[i];//�ͷ�ָ��
            (*category)[i] = new Empty();
            // OwnPosition �����Ԫ���Լ���λ��
            //int OP = (position.getRow() * 5) + position.getColumn();
            //category[OP] = new Empty();
            for (int x = 0; x < length; ++x) {
                if ((*playerItem)[x]->getName() == "hugetreasure")
                {
                    (*playerItem).erase((*playerItem).begin() + x);
                    break;
                }
            }
            break;
        }
        else if ((*category)[i]->getName() == "steelsafe" && isNear(i, j)) {
            value += 30;
            //delete (*category)[i];//�ͷ�ָ��
            (*category)[i] = new Empty();
            // OwnPosition �����Ԫ���Լ���λ��
            //int OP = (position.getRow() * 5) + position.getColumn();
            //category[OP] = new Empty();
            for (int x = 0; x < length; ++x) {
                if ((*playerItem)[x]->getName() == "steelsafe")
                {
                    (*playerItem).erase((*playerItem).begin() + x);
                    break;
                }
            }
            break;
        }
    }
    return price;
}

Key* Key::createNewItem() {
    return new Key();
}

//void Key::setPosition(int newPosition) {
//    position = newPosition;
//}

bool Key::isNear(int position1, int position2) {
    if (abs(position1 - position2) == 6 || abs(position1 - position2) == 5 || abs(position1 - position2) == 4 || abs(position1 - position2) == 1)
        return true;
    return false;
}