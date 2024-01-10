#include "Stack_4.h"
#include <iostream>
#include <vector>

int Stack_4::Pop(){
    if(_array.size() <= 0){
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
        return 0;
    } else {
        int deletedValue = _array.back();
        _array.pop_back();
        return deletedValue;
    }
}

int Stack_4::IsEmpty(){
    if(_array.empty()){
        return 1;
    } else {
        return 0;
    }
}

int Stack_4::IsFull(){
    if(_array.capacity() == _array.size() && _array.size() != 0) {
        return 1;
    } else {
        return 0;
    }
}

void Stack_4::Push(int newElement){
    _array.push_back(newElement);
}

void Stack_4::Print(){
    std::cout << "#Zawartosc obiektu:" << std::endl;
    for(int elem : _array){
        std::cout << elem << ",";
    }
    std::cout << std::endl;
}

int Stack_4::Size(){
    return _array.size();
}

void Stack_4::Clear(){
    _array.clear();
}