#include "AndroidSoldier.h"
#include <iostream>
using namespace std;

AndroidSoldier::AndroidSoldier() {}

AndroidSoldier::AndroidSoldier(const AndroidSoldier& soldierToCopy){
    _type = soldierToCopy._type;
    _quantity = soldierToCopy._quantity;
}

AndroidSoldier::AndroidSoldier(AndroidSoldier&& soldierToMove){
    _type = std::move(soldierToMove._type);
    _quantity = std::move(soldierToMove._quantity);
}

AndroidSoldier& AndroidSoldier::operator=(const AndroidSoldier& soldierToCopy) {
    _type = soldierToCopy._type;
    _quantity = soldierToCopy._quantity;
    return *this;
}

AndroidSoldier& AndroidSoldier::operator=(AndroidSoldier&& soldierToMove) {
    _type = std::move(soldierToMove._type);
    _quantity = std::move(soldierToMove._quantity);
    return *this;
}

AndroidSoldier::AndroidSoldier(int type) : _type(type), _quantity(0) {}

AndroidSoldier::AndroidSoldier(int type, int quantity) : _type(type), _quantity(quantity) {}

void AndroidSoldier::Print() {
    cout << "typ: " << _type << ", ilosc sztuk: " << _quantity << endl;
}

void AndroidSoldier::SetCard(int newQuantity) {
    _quantity = newQuantity;
}

std::string AndroidSoldier::ToString() const {
    return "<typ=" + std::to_string(_type) + ", ilosc=" + std::to_string(_quantity) + ">";
}