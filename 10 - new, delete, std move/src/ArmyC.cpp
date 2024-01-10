#include "ArmyC.h"
#include <iostream>
using namespace std;

ArmyC::ArmyC() {
    _lastIndex = 0;
    _soldiersVector = new AndroidSoldier[10];
};

ArmyC::ArmyC(const ArmyC& armyToCopy) {
    _lastIndex = armyToCopy._lastIndex;
    _soldiersVector = new AndroidSoldier[10];
    for(int i = 0; i < _lastIndex; i++){
        _soldiersVector[i] = armyToCopy._soldiersVector[i];
    }
}

ArmyC::ArmyC(ArmyC&& armyToMove) {
    _lastIndex = armyToMove._lastIndex;
    _soldiersVector = new AndroidSoldier[10];
    for(int i = 0; i < _lastIndex; i++){
        _soldiersVector[i] = std::move(armyToMove._soldiersVector[i]);
    }
    armyToMove._lastIndex = 0;
}

ArmyC &ArmyC::operator=(const ArmyC& armyToCopy) {
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

ArmyC &ArmyC::operator=(ArmyC&& armyToMove) {
    if(&armyToMove == this){
        return *this;
    }
    delete [] _soldiersVector;
    _lastIndex = armyToMove._lastIndex;
    _soldiersVector = new AndroidSoldier[10];
    for(int i = 0; i < _lastIndex; i++){
        _soldiersVector[i] = std::move(armyToMove._soldiersVector[i]);
    }
    armyToMove._lastIndex = 0;
    return *this;
}

ArmyC::~ArmyC() {
    delete [] _soldiersVector;
}

void ArmyC::Print() {
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

void ArmyC::Remove() {
    if(_lastIndex >= 1) _lastIndex--;
}

void ArmyC::Add(AndroidSoldier newSoldier) {
    if(_lastIndex < 10){
        _soldiersVector[_lastIndex] = newSoldier;
        _lastIndex += 1;
    }
}

void ArmyC::Clear() {
    _lastIndex = 0;
}