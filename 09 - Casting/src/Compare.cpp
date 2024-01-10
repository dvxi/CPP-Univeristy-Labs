#include <iostream>
#include "AndroidSoldier.h"

int Compare(const AndroidSoldier& a, const AndroidSoldier& b){
    if(a._quantity > b._quantity) {
        return 1;
    } else {
        return -1;
    }
}