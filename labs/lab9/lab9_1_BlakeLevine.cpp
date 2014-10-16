#include <iostream>
#include <iomanip>
using namespace std;


int main(){

	double rent, salesTax, discount = 0, totalCost, preTaxTotal, rentPerRoom;
	int numOfRooms, numOfDays;
	
	cout << "Enter the Rent per room: ";
	cin >> rent;

	cout << "\nEnter the number of rooms to rent: ";
	cin >> numOfRooms;

	cout << "\nEnter the number of days: ";
	cin >> numOfDays;

	cout << "\nEnter the Sales tax: ";
	cin >> salesTax;

	totalCost= rent * numOfRooms * numOfDays;
	rentPerRoom = totalCost / numOfDays;
	
	if(numOfRooms >= 10 && numOfRooms < 20) {
		totalCost = totalCost - (totalCost * .10);
		discount = .10;
	}
	else if (numOfRooms >= 20 && numOfRooms < 30) {
		totalCost = totalCost - (totalCost * .20);
		discount = .20;
	}	
	else if (numOfRooms >= 30) {
		totalCost = totalCost - (totalCost * .30);
		discount = .30;
	}	

	if(numOfDays >= 3 ) {
		totalCost = totalCost - (totalCost * .05);
		discount = discount + .05;
	}


	rent = rent - (rent * discount);
	discount = discount * 100;
	preTaxTotal = totalCost;
	salesTax = (preTaxTotal * salesTax) * .01;
	totalCost = preTaxTotal + salesTax;

	cout << "-------------------------" << endl;
	cout << "         Reciept         " << endl;
	cout << "-------------------------" << endl;

	cout << showpoint << fixed << setprecision(2);
	cout << "\nRent per room: $" << rent << endl;
	cout << "\nDiscount per room: " << discount << "%" << endl;
	cout << "\nNumber of booked rooms: " << numOfRooms << endl;
	cout << "\nNumber of days staying: " << numOfDays << endl;
	cout << "\nTotal before taxes: $" << preTaxTotal << endl;
	cout << "\nSales Tax: $" << salesTax << endl;
	cout << "\nTotal: $" << totalCost << endl << endl;
	return 0;
}
