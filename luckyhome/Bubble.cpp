#include "../luckyhome/Bubble.h"

Bubble::Bubble() {
    setPrice(1);
    setName("bubble");
    setDescribe("��ֵ2ö���");
    setCounter(3);
    setCounter_now(0);
}

int Bubble::calculateMoney(std::vector<Thing*>* category, int counter, int counter_now, int j) {
    return 2;
}

Bubble* Bubble::createNewItem() {
    return new Bubble();
}