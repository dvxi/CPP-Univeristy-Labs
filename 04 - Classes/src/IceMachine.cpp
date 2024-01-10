#include "IceMachine.h"
#include <iostream>

using namespace std;

void IceMachine::SetID(int newID){
    _id = newID;
}

void IceMachine::SetState(bool newState){
    _state = newState;
}

void IceMachine::SetCapacity(double newCapacity){
    _capacity = newCapacity;
}

void IceMachine::SetConsumption(double newConsumption){
    _consumption = newConsumption;
}

void IceMachine::SetPowder(double newPowder){
    _powder = newPowder;
}

void IceMachine::Presentation(){
    cout << "\n### Prezentacja ###\n";
    cout << "Identyfikator maszyny do lodow wloskich: " << _id << "\n";
    cout << "Maszyna do lodow wloskich jest ";
    if(_state){
        cout << "wylaczona\n";
    } else {
        cout << "wlaczona\n";
    }
    cout << "Pojemnosc maszyny do lodow wloskich wynosi " << _capacity << " kilogramy/kilogramow\n";
    cout << "Srednia wydajnosc wynosi " << _consumption << " kilogramow na 1 porcje\n";
    cout << "W maszynie do lodow wloskich jest " << _powder << " kilogramow proszku\n";
}

void IceMachine::Make(int quantity){
    cout << "\n### Robienie lodow ###\n";
    if(quantity < 0){
        cout << "BLAD: Niepoprawna ilosc porcji\n";
        return;
    }
    if(!_state){
        cout << "BLAD: Wlacz maszyne do lodow wloskich\n";
        return;
    }
    if(_powder < quantity * _consumption){
        cout << "Zrobiles " << _powder/_consumption << " porcji lodow\n";
        _powder = 0;
        return;
    }
    _powder -= quantity * _consumption;
    cout << "Zrobiles " << quantity << " porcji lodow\n";
}

void IceMachine::Start(){
    cout << "\n### Uruchomienie maszyny do lodow wloskich ###\n";
    if(_powder == 0){
        cout << "BLAD: Brak proszku, wsyp\n";
        return;
    }
    _state = true;
    cout << "Maszyna do lodow wloskich zostala wlaczona\n";
}

void IceMachine::Reload(int quantity){
    cout << "\n### Wsypywanie proszku ###\n";
    if(_state){
        cout << "BLAD: Wylacz maszyne do lodow wloskich przed wsypaniem proszku\n";
        return;
    }
    if(quantity < 0){
        cout << "BLAD: Niepoprawna ilosc proszku do wsypania\n";
        return;
    }
    if(quantity + _powder > _capacity){
        cout << "Wsypales " << _capacity - _powder << " kilogram/kilogramow proszku\n";
        _powder = _capacity;
        return;
    }
    _powder += quantity;
    cout << "Wsypales " << quantity << " kilogram/kilogramow proszku\n";
}

void IceMachine::Stop(){
    cout << "\n### Zatrzymanie maszyny do lodow wloskich ###\n";
    _state = false;
    cout << "Maszyna do lodow wloskich zostala wylaczona\n";
}