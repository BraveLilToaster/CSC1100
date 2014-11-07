#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

void menu();
void clr();
void buyCoffee(int, int, int& , int, int, int&, int, int, int&);
void cupsSold(int, int, int); 
void ozCoffee(int, int, int, int, int, int);
void showProfit(int, double, int, double, int, double); 

int main() {
    const int smallSize = 9, mediumSize = 12, largeSize = 15;
    const double smallCost = 1.75, mediumCost = 1.90, largeCost = 2.00;
    int totalSold = 0, smallTotal = 0, mediumTotal = 0, largeTotal = 0;
    double totaloz = 0, profit = 0;
    char menuCondition, cont;

    //menu
    menu();

    do {
        cout << "Enter option number: ";
        cin >> menuCondition; 

        //menu
        menu();
        //clear window
        clr();
        switch(menuCondition) {
            case '1': 
                buyCoffee(smallCost, smallSize, smallTotal, mediumCost, mediumSize, mediumTotal, largeCost, largeSize, largeTotal);
                break;
            case '2': 
                cupsSold(smallTotal, mediumTotal, largeTotal);
                break;
            case '3': 
                ozCoffee(smallTotal, smallSize, mediumTotal, mediumSize, largeTotal, largeSize);
                break;
            case '4': 
                showProfit(smallTotal, smallCost, mediumTotal, mediumCost, largeTotal, largeCost);
                break;
        } 
    }
    while(cont != 'n' || cont != 'N' ) ;

    return 0;
}

void buyCoffee(int smallCost, int smallSize, int& smallTotal, int mediumCost, int mediumSize, int& mediumTotal, int largeCost, int largeSize, int& largeTotal ) {

    char size, cont;
    int cups;
    
    //menu
    menu();

    while (cont != 'n' || cont != 'N') {
        cout << "What size coffee would you like? (S, M, L)" << endl;
        cin >> size;
       // cout << "size is " << size;
/*        if(size != 's' || size != 'S' || size != 'm' || size != 'M' || size != 'l' || size != 'L' ){ 
            cout << "Invalid Input. Try Again." << endl;
            cin >> size;
        }
*/
        cout << "How many cups would you like? " << endl;
        cin >> cups;

        if(size == 's' || size == 'S'){ 
            smallTotal += cups;
        }
        if(size == 'm' || size == 'M'){ 
            mediumTotal += cups;
        }
        if(size == 'l' || size == 'L'){ 
            largeTotal += cups;
        }


        cout << "Would you like anything else? (y/n)" << endl;
        cin >> cont;
/*        if(cont != 'y' || cont != 'Y' || cont != 'n' || cont != 'N'){ 
            cout << "Invalid Input. Try Again." << endl;
            cin >> cont;
        }
*/        if(cont == 'n' || cont == 'N'){
            break;
        }
    }

    return;
}

void cupsSold(int smallTotal, int mediumTotal, int largeTotal) {
    int totalSold;
    char menuCondition;

    totalSold = smallTotal + mediumTotal + largeTotal;

    //menu
    menu();

    cout << "Total small cups sold: " << smallTotal << endl;
    cout << "Total medium cups sold: " << mediumTotal << endl;
    cout << "Total large cups sold: " << largeTotal << endl;
    cout << "Total cups sold: " << totalSold << endl;


    return;
}

void ozCoffee(int smallTotal, int smallSize, int mediumTotal, int  mediumSize, int largeTotal, int largeSize) {
    double totaloz;
    char menuCondition;

    totaloz = (smallTotal * smallSize) + (mediumTotal * mediumSize) + (largeTotal * largeSize);

    //menu
    menu();

    cout << showpoint << fixed << setprecision(2);
    cout << "Total oz sold: " << totaloz << endl;


    return;
}

void showProfit(int smallTotal, double smallCost, int mediumTotal, double mediumCost, int largeTotal, double largeCost) {
    double profit;
    char menuCondition;

    profit = (smallTotal * smallCost) + (mediumTotal * mediumCost) + (largeTotal * largeCost);

    //menu
    menu();

    cout << "Total profits earned: $" << profit << endl;



    return;
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
 

