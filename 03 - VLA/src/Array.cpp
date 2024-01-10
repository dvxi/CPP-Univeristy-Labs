#include "Array.h"
#include <iostream>

using namespace std;

int *InitArray(int arraySize){
    if(arraySize == 0) return NULL; 

    int *tab;
    tab = new int[arraySize];

    return tab;
}

void CreateSequence(int *array, int arraySize){
    if(arraySize == 0 || !array) return;
    array[0] = 0;
    for(int i = 1; i < arraySize; i++){
        array[i] = array[i-1] + i;
    }
}

int *ChangeArraySize(int *array, int arraySize, int newArraySize){
    int *newArr = new int[newArraySize];
    if(!newArr) return array;

    for(int i = 0; i < arraySize; i++){
        newArr[i] = array[i];
    }

    delete [] array;
    return newArr;
}

void DeleteArray(int *array){
    delete [] array;
}