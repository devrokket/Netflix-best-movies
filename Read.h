//
// Created by Rocket on 2022/12/07.
//

#ifndef KAGGLEOOP_READ_H
#define KAGGLEOOP_READ_H

#include <iostream>
#include <string>
#include <istream>
#include <fstream>
using namespace std;

class Read {
    string filePath;

private:
    string s;
    int lineNum;
public:
    string getLine();
};


#endif //KAGGLEOOP_READ_H
