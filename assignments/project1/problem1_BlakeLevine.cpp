#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string menu(string& menuCondition); 
void cost();

int main() {
        string menuCondition = "";
        int price;


        do {
                menu(menuCondition, price);
        }
        while(menuCondition != "exit" || menuCondition != "EXIT" || menuCondition != "Exit");
        return 0;

}

string menu(string& menuCondition, int& price) {

        cout << setfill('*') << setw(20) << "" << endl;
        cout << setfill(' ') << '*' << setw(18) << '*' << endl;
        cout << setfill('*') << setw(20) << "" << endl;
        cout << setfill(' ') << endl;
        cout << endl << "Enter stuff: ";
        cin >> menuCondition;
        cost(menuCondition);

}

void cost(){

}

