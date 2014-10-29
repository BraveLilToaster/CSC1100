#include <iostream>
using namespace std;

double readin(double& current, double& oneYear, double& twoYear);
double inflation(double current, double oneYear, double twoYearP, double& inf1, double& inf2);
double readout(double& inf1, double& inf2);


int main() {
        double currentP, oneYearP, twoYearP, inf1, inf2;
        readin(currentP, oneYearP, twoYearP);
        inflation(currentP, oneYearP, twoYearP, inf1, inf2);
        readout(inf1, inf2);
}

//reads in inflation rates
double readin(double& current, double& oneYear, double& twoYear){
        cout << "Enter the price for the current year: ";
        cin >> current;
        cout << "Enter the price for the last year: ";
        cin >> oneYear;
        cout << "Enter the price for two years ago: ";
        cin >> twoYear;
}

//calculates inflation rates
double inflation(double current, double oneYear, double twoYear, double& inf1, double& inf2){
        inf1 = (current - oneYear) / oneYear * 100;
        inf2 = (oneYear - twoYear) / twoYear * 100;
}

//outputs inflations rate and trend
double readout(double& inf1, double& inf2) {
        cout << "Inflation rate between current year and last year: " << inf1 << "%" << endl;
        cout << "Inflation rate between last year and two years ago: " << inf2 << "%" << endl;
        if(inf1 != inf2) {
                cout << "The rate of inflation is " << (inf1 > inf2 ? "Increasing" : "Decreasing") << endl;
        }
        else {
                cout << "The rate of inflation is stagnant." << endl;
        }

}
