#include "../luckyhome/Hugetreasure.h"

Hugetreasure::Hugetreasure() {
    setPrice(1);
    setName("hugetreasure");
    setDescribe("��ֵ100ö���,���Ա�Կ������");
}

int Hugetreasure::calculateMoney(vector<Thing*>* category) {
    return 1;
}

Hugetreasure* Hugetreasure::createNewItem() {
    return new Hugetreasure();
}