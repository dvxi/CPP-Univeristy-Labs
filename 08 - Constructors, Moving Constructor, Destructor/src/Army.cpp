#include "Army.h"
#include <iostream>
using namespace std;

Army::Army(){};

Army::Army(AndroidSoldier newSoldier) {
    _soldiersVector.push_back(newSoldier);
}

Army::Army(AndroidSoldier newSoldier1, AndroidSoldier newSoldier2) {
    _soldiersVector.push_back(newSoldier1);
    _soldiersVector.push_back(newSoldier2);
}

Army::Army(int count, AndroidSoldier** table) {
    for(int i = 0; i < count; i++) {
        _soldiersVector.push_back(*table[i]);
    }
}

Army::Army(vector<AndroidSoldier> newSoldiers) : _soldiersVector(newSoldiers) {}

Army::Army(Army &newArmy) {
    _soldiersVector = newArmy.GetSoldiers();
}

Army::Army(Army &&newArmy) {
    _soldiersVector = newArmy.GetSoldiers();
}

void Army::Print(){
    cout << "---" << endl;
    cout << "# Zawartosc/sklad:" << endl;
    for(AndroidSoldier soldier : _soldiersVector){
        soldier.Print();
    }
    cout << "---" << endl;
}

void Army::Remove(){
    if(_soldiersVector.empty()){
        cout << "BLAD: Pusto !" << endl;
    }
    _soldiersVector.pop_back();
}

void Army::Add(AndroidSoldier newSoldier){
    _soldiersVector.push_back(newSoldier);
}

void Army::Clear(){
    _soldiersVector.clear();
}

std::vector<AndroidSoldier> Army::GetSoldiers(){
    return _soldiersVector;
}