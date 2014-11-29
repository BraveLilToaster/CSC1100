#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void convert(string name);

int main(){
    string name;
    ifstream infile;

    infile.open("input.txt");
    while(infile){
        getline(infile, name);
        convert(name);
    }
    infile.close();
}

void convert(string name){
    int len, com;
    string first,last;

    len = name.length();
    com = name.find(',');
    last = name.substr(0, com);
    first = name.substr(com + 1, len);

    cout << first + " " + last << endl;
}
