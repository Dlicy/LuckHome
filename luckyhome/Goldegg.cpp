#include "../luckyhome/Goldegg.h"

Goldegg::Goldegg() {
    setPrice(1);
    setName("goldegg");
    setDescribe("��ֵ4ö���");
}

int Goldegg::calculateMoney(vector<Thing*> category) {
    return 4;
}

Goldegg* Goldegg::createNewItem() {
    return new Goldegg();
}