#include "AndroidSoldier.h"
#include <iostream>
using namespace std;

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