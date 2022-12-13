//
// Created by Rocket on 2022/12/07.
//

#include "Read.h"

struct Record
{
    std::string index;
    std::string title;
    std::string releaseYear;
    std::string numOfVotes;
    std::string score;
    std::string duration;
    std::string mainGenre;
    std::string mainProduction;
};

std::vector<Record> myRecords;

Read::Read() {
    fileRoot = "/Users/rocket/CLionProjects/kaggleOop/Best Movies Netflix.csv";
    /*fstream inoutFile;
    string str_buf;
    string line;
    vector<string> index;*/
};

void Read::ReadWord() {
    std::cout<<"----------ReadWord() is executed!----------"<< std::endl;
    inoutFile.open(fileRoot, std::ios::in | std::ios::out);

    while(!inoutFile.eof()) {
        getline(inoutFile, str_buf, ',');
        std::cout <<str_buf<< std::endl;
    }
    inoutFile.close();
}

void Read::ReadLine() {
    inoutFile.open(fileRoot, std::ios::in | std::ios::out);

    /*while(!inoutFile.eof()) {
        getline(inoutFile, line);
        cout<<line<<endl;
    }*/
    std::cout<<"----------ReadLine() is executed!----------"<<std::endl;
    getline(inoutFile, line);
    std::cout<<line<<std::endl;
    inoutFile.close();
}

void Read::StoreIndex() {
    std::cout << "----------StoreIndex() is executed!----------" << std::endl;
    /*while(!inoutFile.eof()) {
        getline(inoutFile, str_buf, ',');
        indexVec.push_back(str_buf);
    }
    cout<<indexVec.front()<<'\n'<<indexVec.back()<< endl;

    for(int i=0; i<10; i++) {
        cout<<indexVec[i]<<endl;
    }
    cout<<"indexVec[0] value is "<<indexVec[0];
*/
    std::cout << "new way" << std::endl;/*
    while(!inoutFile.eof()) {
        getline(inoutFile, line);
        indexVec.push_back(line);
        cout<<"word:"<<line<<"vec:"<<indexVec[31];
    }
    cout<<indexVec.begin()<<endl;*/

//    while (getline(inoutFile, line)) {
//        Record record;
//        istringstream iss(line);
//        string token;
//
//        getline(iss, record.index, ',');
//        getline(iss, record.title, ',');
//        getline(iss, record.releaseYear, ',');
//        getline(iss, record.numOfVotes, ',');
//        getline(iss, record.score, ',');
//        getline(iss, record.duration, ',');
//        getline(iss, record.mainGenre, ',');        getline(iss, record.duration, ',');
//        getline(iss, record.mainProduction, ',');
//
///*        // use atoi(token.c_str()) if you don't have std::stoi from C++11
//        getline(iss, token, ',');
//        record.releaseYear = stoi(token);
//
//        // use atof(token.c_str()) if you don't have std::stod from C++11
//        getline(iss, token, ',');
//        record.numOfVotes = stod(token);
//
//        getline(iss, token, ',');
//        record.duration = stod(token);*/
//
//        myRecords.push_back(record);
//    }/*
//    for (size_t i = 0; i < myRecords.size() - 1; i++) {
//        for (size_t j = i + 1; j < myRecords.size(); j++) {
//            cout << myRecords[i].index << endl;
//            cout << myRecords[j].title << endl;
//            cout << myRecords[i].mainGenre << endl;
//        }
//    }*/
//    for (size_t i = 0; i < myRecords.size() - 1; i++)
//    {
//        for (size_t j = i + 1; j <myRecords.size(); j++)
//        {
//            cout << myRecords[i].index << endl;
//            cout << myRecords[j].title << endl;
//            cout << myRecords[i].releaseYear << endl;
//        }
//    }
//    //출력 안 됨.
}
