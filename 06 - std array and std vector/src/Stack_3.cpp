#include "Stack_3.h"
#include <iostream>

Stack_3::Stack_3(int newSize){
    _size = newSize;
    _array = new int [_size];
}

Stack_3::~Stack_3(){
    delete [] _array;
}

int Stack_3::Pop(){
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

int Stack_3::IsEmpty(){
    if(_count <= 0){
        return 1;
    } else {
        return 0;
    }
}

int Stack_3::IsFull(){
    if(_count == _size) {
        return 1;
    } else {
        return 0;
    }
}

void Stack_3::Push(int newElement){
    if(_count >= _size) {
        _size *= 2;
        int tempArray[_size];
        for(int i = 0; i < _count; i++){
            tempArray[i] = _array[i];
        }

        delete [] _array;

        _array = new int [_size];

        for(int i = 0; i < _count; i++){
            _array[i] = tempArray[i];
        }
    }
    _array[_count] = newElement;
    _count++;
}

void Stack_3::Print(){
    std::cout << "#Zawartosc obiektu:" << std::endl;
    for(int i = 0; i < _count; i++){
        std::cout << _array[i] << ",";
    }
    std::cout << std::endl;
}

int Stack_3::Size(){
    return _count;
}

void Stack_3::Clear(){
    for(int i = 0; i < _count; i++){
        _array[i] = 0;
    }
    _count = 0;
    delete [] _array;
}