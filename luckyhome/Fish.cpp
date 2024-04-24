#include "../luckyhome/Fish.h"
#include "../luckyhome/Empty.h"

Fish::Fish() : Thing() {
    setPrice(3);
    setName("fish");
    setDescribe("��ֵ1ö��ң�������Χ�����ݣ�ÿ����һ�����ݣ����15ö���");
}

int Fish::calculateMoney(std::vector<Thing*>* category, std::vector<Thing*>* playerItem, int j) {
    int value = 1;
    int length = (*playerItem).size();
    for (int i = 0; i < 20; i++) {
        if ((*category)[i]->getName() == "bubble" && isNear(i, j)) {
            value += 15;

            (*category)[i] = new Empty();//�ͷ�ָ��
            for (int x = 0; x < length; ++x) {
                if ((*playerItem)[x]->getName() == "bubble")
                {
                    (*playerItem).erase((*playerItem).begin()+x);
                    break;
                }
            }
            //(*category)[i] = new Empty();
        }
    }
    return value;
}

Fish* Fish::createNewItem() {
    return new Fish();
}

bool Fish::isNear(int position1, int position2) {
    if (abs(position1 - position2) == 6 || abs(position1 - position2) == 5 || abs(position1 - position2) == 4 || abs(position1 - position2) == 1)
        return true;
    return false;
}

//void Fish::setPosition(int newpposition) {
//    // �������λ��
//    position = newposition;
//}