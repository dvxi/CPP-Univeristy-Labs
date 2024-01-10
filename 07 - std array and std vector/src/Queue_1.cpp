#include "Queue_1.h"
#include <iostream>

int Queue_1::Dequeue(){
    if(_count <= 0){
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
        return 0;
    } else {
        int deletedValue = _array[0];
        for(int i = 0; i < _count - 1; i++){
            _array[i] = _array[i+1];
        }
        _array[_count] = 0;
        _count--;
        return deletedValue;
    }
}

int Queue_1::IsEmpty(){
    if(_count <= 0){
        return 1;
    } else {
        return 0;
    }
}

int Queue_1::IsFull(){
    if(_count == _size) {
        return 1;
    } else {
        return 0;
    }
}

void Queue_1::Enqueue(int newElement){
    if(_count < _size){
        _array[_count] = newElement;
        _count++;
    } else {
        std::cout << "#BLAD: Obiekt zapelniony" << std::endl;
    }
}

void Queue_1::Print(){
    std::cout << "#Zawartosc obiektu:" << std::endl;
    for(int i = 0; i < _count; i++){
        std::cout << _array[i] << ",";
    }
    std::cout << std::endl;
}

int Queue_1::Size(){
    return _count;
}

void Queue_1::Clear(){
    for(int i = 0; i < _count; i++){
        _array[i] = 0;
    }
    _count = 0;
}