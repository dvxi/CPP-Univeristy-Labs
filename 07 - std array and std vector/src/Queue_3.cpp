#include "Queue_3.h"
#include <iostream>

Queue_3::Queue_3(int newSize){
    _size = newSize;
    _array = new int [_size];
}

Queue_3::~Queue_3(){
    delete [] _array;
}

int Queue_3::Dequeue(){
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

int Queue_3::IsEmpty(){
    if(_count <= 0){
        return 1;
    } else {
        return 0;
    }
}

int Queue_3::IsFull(){
    if(_count == _size) {
        return 1;
    } else {
        return 0;
    }
}

void Queue_3::Enqueue(int newElement){
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

void Queue_3::Print(){
    std::cout << "#Zawartosc obiektu:" << std::endl;
    for(int i = 0; i < _count; i++){
        std::cout << _array[i] << ",";
    }
    std::cout << std::endl;
}

int Queue_3::Size(){
    return _count;
}

void Queue_3::Clear(){
    for(int i = 0; i < _count; i++){
        _array[i] = 0;
    }
    _count = 0;
    // delete [] _array;
}