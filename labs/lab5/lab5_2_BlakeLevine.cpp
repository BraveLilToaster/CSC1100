#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	double weightPounds, weightKg;

	cout << "Enter your weight in kilograms: ";
	cin >> weightKg;

	cout << showpoint << fixed << setprecision(2); 
	weightPounds = weightKg / 2.2;
	cout << "Your weight in pounds is: " << weightPounds << endl; 

	return 0;
}
