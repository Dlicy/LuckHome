#include "../luckyhome/Cat.h"

Cat::Cat(){
    setPrice(3);
    setName("cat");
    setDescribe("��ֵ1ö��ң�������Χ��ţ�̣�ÿ����һ��ţ�̣����9ö���");

}

int Cat::calculateMoney(std::vector<Thing*>* category, std::vector<Thing*>* playerItem, int j) {
    int value = 1;
    int length = (*playerItem).size();
    for (int i = 0; i < 20; i++) {
        if ((*category)[i]->getName() == "milk" && isNear(i, j)) {
            value += 9;
            //delete (*category)[i];//�ͷ�ָ��
            (*category)[i] = new Empty(); // ����ţ��
            for (int x = 0; x < length; ++x) {
                if ((*playerItem)[x]->getName() == "milk")
                {
                    (*playerItem).erase((*playerItem).begin() + x);
                    break;
                }
            }
            //
        }
    }
    //����
    //cout << "1";
    return value;
}

Cat* Cat::createNewItem() {
    return new Cat();
}

bool Cat::isNear(int position1, int position2) {
    if (abs(position1 - position2) == 6 || abs(position1 - position2) == 5 || abs(position1 - position2) == 4 || abs(position1 - position2) == 1)
        return true;
    return false;
}

//void Cat::setPosition(int newposition) {
//    position = newposition;
//}