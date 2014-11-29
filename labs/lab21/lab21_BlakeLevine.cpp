#include <iostream>
#include <vector>
using namespace std;

void search(vector<string> a, string x);

int main() {
    vector<string> a;
    string x;
    getline(cin, x);

    a.push_back("Steve");
    a.push_back("Mike");
    a.push_back("Dan");
    a.push_back("Mary");
    a.push_back("Boros");
    a.push_back("Sorin");

    search(a, x);
}

void search(vector<string> a, string x){
    int z = 0;
    for(int i=0; i<a.size(); i++){
        if(x == a[i]){
            cout << "String exists in the vector." << endl;
            z = 1;
        }
    }
    if (z!=1){
            cout << "String does not exist in the vector." << endl;
    }
}
