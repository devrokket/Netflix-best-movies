//
// Created by Rocket on 2022/12/07.
//

#ifndef KAGGLEOOP_READ_H
#define KAGGLEOOP_READ_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>


class Read {
private:
    std::string fileRoot;
    std::fstream inoutFile;
    std::string str_buf;
    std::string line;
    std::vector<std::vector<std::string>> indexVec;

    //vector<string> csvRow(istream &file, char delimiter);
public:
    Read();
    void ReadWord();
    void ReadLine();
    void StoreIndex();
    ~Read();

};

#endif //KAGGLEOOP_READ_H
