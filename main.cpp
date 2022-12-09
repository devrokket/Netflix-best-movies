#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <istream>
#include <vector>

using namespace std;

class Read {
private:
    fstream inoutFile;
    string fileRoot;
    string str_buf;
public:
    Read();
    void ReadWord();
    ~Read();

};

Read::Read() {
    fileRoot = "/Users/rocket/CLionProjects/kaggleOop/Best Movies Netflix.csv";
    fstream inoutFile;
    string str_buf;
};

void Read::ReadWord() {
    inoutFile.open(fileRoot, ios::in | ios::out);

    while(!inoutFile.eof()) {
        getline(inoutFile, str_buf, ',');
        cout<<str_buf<<endl;
    }

    inoutFile.close();
}




int main()
{
    Read ReadMyFile;
    ReadMyFile.ReadWord();
    return 0;
}


Read::~Read() {}
