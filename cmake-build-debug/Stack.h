//
// Created by Rocket on 2022/12/07.
//

#ifndef KAGGLEOOP_STACK_H
#define KAGGLEOOP_STACK_H

#include <iostream>

class Stack {
private:
    int *stackPtr;
    int maxLen;
    int topPtr;
public:
    Stack();
    ~Stack();
    void push(int);
    void pop();
    int top();
    int empty();
};


#endif //KAGGLEOOP_STACK_H
