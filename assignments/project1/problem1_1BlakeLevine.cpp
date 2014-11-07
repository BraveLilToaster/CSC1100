#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

void menu(); 
void getInput(bool&, int&, int&);
double cost(double, double, int, int, bool );
void clr();

int main() {
    char menuCondition ;
    const double pricePerMonth = 75.00, priceSession = 50.00;
    int sessions, months;
    bool seniorCit;

    do {
    //menu
    menu();
    //input 
    getInput(seniorCit, months, sessions);
    //clear window
    clr();
    //Output Total
    cout << showpoint << fixed << setprecision (2);
    cout << "Your total is: $" << cost(priceSession, pricePerMonth, sessions, months, seniorCit )  << endl; 
    cout << noshowpoint;
    //continue prompt
    cout << "Return to menu? (y/n)" << endl;
    cin >> menuCondition;
    if(menuCondition != 'n' || menuCondition != 'N' ){
        break;
    } 
    }
    while(menuCondition != 'n' || menuCondition != 'N' ) ;

    return 0;
}

//display menu
void menu() {
        //clear window
        clr();
        //menu
        cout << setfill('*') << setw(60) << "" << endl;
        cout << setfill(' ') << "* "  << setw(58) << internal << " *" << endl;
        cout << setfill(' ') << "* "  << setw(56) << left << "Welcome To the PowerHouse Gym." << " *" << endl;
        cout << setfill(' ') << "* "  << setw(58) << internal << " *" << endl;
        cout << setfill('*') << setw(60) << "" << endl;
        cout << setfill(' ') << "* "  << setw(56) << left << "Membership is $75.00 per month." << " *" << endl;
        cout << setfill(' ') << "* "  << setw(56) << left << "Each Session is $50.00." << " *" << endl;
        cout << setfill(' ') << "* "  << setw(56) << left << "Senior Citizen Discount: 30% " << " *" << endl;
        cout << setfill(' ') << "* " << setw(56) << "Purchase 12 or more months of membership: 15% off " << " *" << endl;
        cout << setfill(' ') << "* " << setw(56) << "Purchase 5 or more personal training sessions: 20% off" << " *" << endl;
        cout << setfill('*') << setw(60) << "" << endl;
        cout << setfill(' ') << endl;
}


void getInput(bool& seniorCit, int& months, int& sessions) {
    char senior;
    cout << "Are you a Senior Citizen? (y/n)" << endl;
    while (senior != 'y' || senior != 'n'){
        cin >> senior;
        if (senior == 'y' || senior == 'Y'){
            seniorCit = 1;
            break;
        }
        else if (senior =='n' || senior == 'N'){
            seniorCit = 0;
            break;
        }
        else {
                cout << "Invalid Input. Try again." << endl;
        }
    }

    cout << "How many months of memebership would you like to purchase? " << endl;
    cin >> months;
    while(months < 0) {
        cout << "Invalid Input. Try again." << endl;
        cin >> months;
    }

    cout << "How many sessions woud you like to purchase? " << endl;
    cin >> sessions;
    while(sessions < 0) {
        cout << "Invalid Input. Try again." << endl;
        cin >> sessions;
    }

    return;
}

double cost(double priceSession, double pricePerMonth, int sessions, int months, bool seniorCit ) {
    double total = (pricePerMonth * months) + (priceSession * sessions);
    if(seniorCit == true){
        total =  total - (total * .30);
    }
    if (months >= 12) {
        total =  total - (total * .15);
    }
    if (sessions > 5) {
        total = total - (( priceSession * .20) *  sessions);
    }
    return total;
}

void clr(){
    #ifdef WIN32
        system ("cls");

    #else 
        // Assume UNIX System
        system ("clear");
    #endif

}
