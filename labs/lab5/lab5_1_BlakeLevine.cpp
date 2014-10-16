#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double numShareSold, priceShareBuy, priceShareSell, totalInvest, totalCharges, totalGain, totalSell;	

	cout << "Enter the amount of shares sold: ";
	cin >> numShareSold;

	cout << "Enter the purchase price of each share: ";
	cin >> priceShareBuy;

	cout << "Enter the selling price of each share: ";
	cin >> priceShareSell;
	
	//set to 2 decimals
	cout << showpoint << fixed << setprecision(2);

	totalInvest = priceShareBuy * numShareSold; 
	totalInvest -= totalInvest * .015;
	cout << "Total amount invested: $" << totalInvest << endl;

	totalGain = priceShareSell * numShareSold;

	totalCharges = (totalInvest * .015) + (totalGain * .015);  
	cout << "Total service charges for purchasing and selling stock: $" << totalCharges << endl;

	cout << "Amount gained or lost: $" << totalGain << endl;

	totalSell = totalGain - totalCharges;
	cout << "Amount recieved after selling stock: $" << totalSell << endl;

	return 0;


}

