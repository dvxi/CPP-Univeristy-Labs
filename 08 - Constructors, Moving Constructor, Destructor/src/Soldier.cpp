#include "Soldier.h"
#include <iostream>
using namespace std;

AndroidSoldier::AndroidSoldier(int type, int quantity) : _type(type), _quantity(quantity) {}

void AndroidSoldier::Print() {
    cout << "typ: " << _type << ", ilosc sztuk: " << _quantity << endl;
}

void AndroidSoldier::SetCard(int newQuantity) {
    _quantity = newQuantity;
}