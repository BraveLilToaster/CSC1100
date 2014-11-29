#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

    char str[10];
    int length = 10;

    cin.get(str, 10);
    for(int i= 0; i < length; i++){
        cout << static_cast<char>(toupper(str[i]));
    }
    cout << endl;

}
