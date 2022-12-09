//
// Created by Rocket on 2022/12/07.
//

#ifndef KAGGLEOOP_READ_H
#define KAGGLEOOP_READ_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;


class Read {
private:
    string fileRoot;
    fstream inoutFile;
    string str_buf;
    string line;
    vector<vector<string>> indexVec;

    //vector<string> csvRow(istream &file, char delimiter);
public:
    Read();
    void ReadWord();
    void ReadLine();
    void StoreIndex();
    ~Read();

};

#endif //KAGGLEOOP_READ_H
