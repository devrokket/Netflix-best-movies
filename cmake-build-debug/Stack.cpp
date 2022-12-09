//
// Created by Rocket on 2022/12/07.
//

#include "Stack.h"
#include <iostream>

Stack::Stack() {
    stackPtr = new int [100];
    maxLen = 99;
    topPtr = -1;
}
Stack::~Stack() {delete [] stackPtr;};
void Stack::push(int number) {
    if(topPtr == maxLen)
        std::cout << "Error in push--stack is full\n";
    else stackPtr[++topPtr] = number;
}


