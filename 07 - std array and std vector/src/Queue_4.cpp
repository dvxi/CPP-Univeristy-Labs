#include "Queue_4.h"
#include <iostream>
#include <vector>

int Queue_4::Dequeue(){
    if(_array.size() <= 0){
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
        return 0;
    } else {
        int deletedValue = _array.front();
        for(int i = 0; i < _array.size() - 1; i++){
            _array[i] = _array[i+1];
        }
        _array.pop_back();
        return deletedValue;
    }
}

int Queue_4::IsEmpty(){
    if(_array.empty()){
        return 1;
    } else {
        return 0;
    }
}

int Queue_4::IsFull(){
    if(_array.capacity() == _array.size() && _array.size() != 0) {
        return 1;
    } else {
        return 0;
    }
}

void Queue_4::Enqueue(int newElement){
    _array.push_back(newElement);
}

void Queue_4::Print(){
    std::cout << "#Zawartosc obiektu:" << std::endl;
    for(int elem : _array){
        std::cout << elem << ",";
    }
    std::cout << std::endl;
}

int Queue_4::Size(){
    return _array.size();
}

void Queue_4::Clear(){
    _array.clear();
}