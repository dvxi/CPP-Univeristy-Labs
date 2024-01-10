#include "ArmyB.h"
#include <iostream>
using namespace std;

ArmyB::ArmyB() {
    _lastIndex = 0;
    _soldiersVector = new AndroidSoldier[10];
};

ArmyB::ArmyB(const ArmyB& armyToCopy) {
    _lastIndex = armyToCopy._lastIndex;
    _soldiersVector = new AndroidSoldier[10];
    for(int i = 0; i < _lastIndex; i++){
        _soldiersVector[i] = armyToCopy._soldiersVector[i];
    }
}

ArmyB &ArmyB::operator=(const ArmyB& armyToCopy) {
    if(&armyToCopy == this){
        return *this;
    }
    delete [] _soldiersVector;
    _lastIndex = armyToCopy._lastIndex;
    _soldiersVector = new AndroidSoldier[10];
    for(int i = 0; i < _lastIndex; i++){
        _soldiersVector[i] = armyToCopy._soldiersVector[i];
    }
    return *this;
}

ArmyB::~ArmyB() {
    delete [] _soldiersVector;
}

void ArmyB::Print() {
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

void ArmyB::Remove() {
    if(_lastIndex >= 1) _lastIndex--;
}

void ArmyB::Add(AndroidSoldier newSoldier) {
    if(_lastIndex < 10){
        _soldiersVector[_lastIndex] = newSoldier;
        _lastIndex += 1;
    }
}

void ArmyB::Clear() {
    _lastIndex = 0;
}