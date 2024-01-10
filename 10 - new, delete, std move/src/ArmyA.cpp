#include "ArmyA.h"
#include <iostream>
using namespace std;

ArmyA::ArmyA(){};

void ArmyA::Print() {
    cout << "---" << endl;
    cout << "# Zawartosc/sklad:" << endl;
    if(_lastIndex <= 0){
        cout << "---" << endl;
        cout << "BLAD: Pusto !" << endl;
    } else {
        for(int i = 0; i < _lastIndex; i++){
            _soldiersVector[i].Print();
        }
        cout << "---" << endl;
    }
}

void ArmyA::Remove() {
    if(_lastIndex >= 1) _lastIndex--;
}

void ArmyA::Add(AndroidSoldier newSoldier) {
    if(_lastIndex < 10){
        _soldiersVector[_lastIndex] = newSoldier;
        _lastIndex += 1;
    }
}

void ArmyA::Clear() {
    _lastIndex = 0;
}