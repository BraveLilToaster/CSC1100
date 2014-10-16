#include <iostream>
using namespace std;

int main(){
	int num1;

	cout << "Enter a number and I will tell you if it is positive negative or zero: ";
	cin >> num1;


	if (num1 == 0) {
		cout << "\nThe number is zero." << endl;	
	}
	else if (num1 < 0) {
		cout << "\nThe number is negative." << endl;	

	}
	else if (num1 > 0) {
		cout << "\nThe number is positive." << endl;	

	}
	else {
		cout << "\nInvalid input." << endl;	
	}
	return 0;
}
