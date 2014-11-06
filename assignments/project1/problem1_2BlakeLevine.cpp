#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

void menu();
void clr();

int main() {
    const int smallSize = 9, mediumSize = 12, largeSize = 15;
    const double smallCost = 1.75, mediumCost = 1.90, largeCost = 2.00;
    char menuCondition;

    do {
        //clear window
        clr();
        //menu
        menu();
        cin >> menuCondition; 
        cout << "Enter number: ";

        switch(menuCondition) {
            case 1: 
                buyCoffee();
            case 2: 
                buyCoffee();
            case 3: 
                buyCoffee();
            case 4: 
                buyCoffee();
        } 
        //clear window
        clr();
        //continue
        cout << "Continue? (y/n)" << endl;
        cin >> menuCondition;
    }
    while(menuCondition != 'n' || menuCondition != 'N' ) ;

    return 0;
}

void menu(){
    clr();
    cout << setfill('*') << setw(60) << "" << endl;
    cout << setfill(' ') << "* "  << setw(58) << internal << " *" << endl;
    cout << setfill(' ') << "* "  << setw(56) << left << "Welcome To Jason's Coffee Shop" << " *" << endl;
    cout << setfill(' ') << "* "  << setw(58) << internal << " *" << endl;
    cout << setfill('*') << setw(60) << "" << endl;
    cout << setfill(' ') << "* "  << setw(56) << left << "small   (9oz) $1.75" << " *" << endl;
    cout << setfill(' ') << "* "  << setw(56) << left << "medium (12oz) $1.90" << " *" << endl;
    cout << setfill(' ') << "* "  << setw(56) << left << "large  (15oz) $2.00" << " *" << endl;
    cout << setfill(' ') << "* "  << setw(58) << internal << " *" << endl;
    cout << setfill(' ') << "* "  << setw(56) << left << "(1) Buy coffee" << " *" << endl;
    cout << setfill(' ') << "* "  << setw(56) << left << "(2) Show the total number of cups sold" << " *" << endl;
    cout << setfill(' ') << "* "  << setw(56) << left << "(3) Show the total amount of coffee sold" << " *" << endl;
    cout << setfill(' ') << "* "  << setw(56) << left << "(4) Show the total money made" << " *" << endl;
    cout << setfill(' ') << "* "  << setw(58) << internal << " *" << endl;
    cout << setfill('*') << setw(60) << "" << endl;
    cout << setfill(' ') << endl;
}
 
void clr(){
    #ifdef WIN32
        system ("cls");

    #else 
        // Assume UNIX System
        system ("clear");
    #endif

}
 

