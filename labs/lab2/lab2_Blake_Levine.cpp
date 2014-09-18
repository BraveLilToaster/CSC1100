#include <iostream>
#include <string>
using namespace std;

int main(){
	int nickelValue = 5;	
	int dimeValue = 10;	
	int quarterValue = 25;	

	int nickelAmount = 0;	
	int dimeAmount = 0;	
	int quarterAmount = 0;	

	cout << "Enter number of nickels deposited: ";
	cin >> nickelAmount;

	cout << "Enter number of dimes deposited: ";
	cin >> dimeAmount;

	cout << "Enter number of quarters deposited: ";
	cin >> quarterAmount;

	int penniesTotal = (nickelValue * nickelAmount) + ( dimeValue * dimeAmount ) + ( quarterValue * quarterAmount ); 
	cout << "The total is " << penniesTotal << " pennies." << endl;

	return 0;
}
