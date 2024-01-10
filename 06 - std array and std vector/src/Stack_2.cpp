#include "Stack_2.h"
#include <iostream>
#include <array>

int Stack_2::Pop(){
    if(_count <= 0){
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
        return 0;
    } else {
        int deletedValue = _array[_count - 1];
        _array[_count - 1] = 0;
        _count--;
        return deletedValue;
    }
}

int Stack_2::IsEmpty(){
    if(_count <= 0){
        return 1;
    } else {
        return 0;
    }
}

int Stack_2::IsFull(){
    if(_count == _array.max_size()) {
        return 1;
    } else {
        return 0;
    }
}

void Stack_2::Push(int newElement){
    if(_count < _array.max_size()){
        _array[_count] = newElement;
        _count++;
    } else {
        std::cout << "#BLAD: Obiekt zapelniony" << std::endl;
    }
}

void Stack_2::Print(){
    std::cout << "#Zawartosc obiektu:" << std::endl;
    for(int i = 0; i < _count; i++){
        std::cout << _array[i] << ",";
    }
    std::cout << std::endl;
}

int Stack_2::Size(){
    return _count;
}

void Stack_2::Clear(){
    for(int i = 0; i < _count; i++){
        _array[i] = 0;
    }
    _count = 0;
}