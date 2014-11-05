#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

void menu(); 
void getInput(bool&, int&, int&);
double cost(double&, double&, int&, int&, bool& );
void clr();

int main() {
        menu();
        return 0;
}

void menu() {
        char menuCondition ;
        double pricePerMonth = 75.00, priceSession = 50.00;
        int sessions, months;
        bool seniorCit;

        clr();
        do {
                cout << setfill('*') << setw(60) << "" << endl;
                cout << setfill(' ') << "* "  << setw(58) << " *" << endl;
                cout << setfill(' ') << "* "  << setw(56) << left << "Welcome To the PowerHouse Gym." << " *" << endl;
                cout << setfill(' ') << "* "  << setw(58) << " *" << endl;
                cout << setfill('*') << setw(60) << "" << endl;
                cout << setfill(' ') << "* "  << setw(56) << left << "Membership is $75.00 per month." << " *" << endl;
                cout << setfill(' ') << "* "  << setw(56) << left << "Each Session is $50.00." << " *" << endl;
                cout << setfill(' ') << "* "  << setw(56) << left << "(1) I am a Senior Citizen" << " *" << endl;
                cout << setfill(' ') << "* " << setw(56) << "(2) I am purchasing 12 or more months of membership " << " *" << endl;
                cout << setfill(' ') << "* " << setw(56) << "(3) I am pruchasing 5 or more personal training sessions" << " *" << endl;
                cout << setfill('*') << setw(60) << "" << endl;
                cout << setfill(' ') << endl;
                getInput(seniorCit, months, sessions);
                clr();
                cout << "Your total is: " << cost(priceSession, pricePerMonth, sessions, months, seniorCit )  << endl; 
                cout << "Continue? (y/n)"
                if(menuCondition == 'n' || menuCondition == 'N' ) {
                        break;
                }
        }
        while(menuCondition != "exit" || menuCondition != "EXIT" || menuCondition != "Exit"); 
        

        return;
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

        cout << "How many sessions woud you like to purchase? " << endl;
        cin >> sessions;
        return;
}

double cost(double& priceSession, double& pricePerMonth, int& sessions, int& months, bool& seniorCit ) {
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
