#include <iostream>
using namespace std;

int main() {

	double payRate = 15.50, hrsWorkWeek, totalIncome, postTaxIncome;

	cout << "Enter pay rate per hour: ";
	cin >> payRate;

	cout << "Enter number of  hours worked this week: ";
	cin >> hrsWorkWeek;

	//calculates income before and after taxes
	totalIncome = 5.00 * (payRate * hrsWorkWeek);
	postTaxIncome = totalIncome - (.14 * totalIncome);
	cout << "Total income before taxes is $" << totalIncome << ", and after taxes is $" << postTaxIncome << "." << endl;

	//money spent on clothes and accessories
	double spendClothes = postTaxIncome * .10;
	cout << "Total income spent on clothes and accessories: $" << spendClothes << ".00" << endl;

	//money spent on schoolsupplies
	double spendSchoolSupplies = postTaxIncome * .01;
	cout << "Total income spent on clothes and accessories: $" << spendSchoolSupplies << "0" << endl;

	//money spent on savings bonds
	double spendBonds = postTaxIncome * .25;
	cout << "Total income spent on clothes and accessories: $" << spendBonds << ".00" << endl;

	//money parents spend on savings bonds
	double spendBondsParents = spendBonds * .50;
	cout << "Total income spent on clothes and accessories: $" << spendBondsParents << ".00" << endl;



	return 0;
}
