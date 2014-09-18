#include <iostream>
#include <string>
using namespace std;

int main() {
	double milkLiters, milkCarton = 3.78, literCost = 0.38, cartonProfit = .27;

	cout << endl << "How much milk was produced today in liters:" << endl;
	cin >> milkLiters;

	int cartonsTotal = static_cast<int>(milkLiters / milkCarton);
	cout << endl << "That should fill " << cartonsTotal << " cartons." << endl;

	double milkCost = cartonsTotal * literCost;
	cout << "That costs $" << milkCost << endl;

	double milkProfit = cartonsTotal * cartonProfit;
	cout << "The profit for today will be  $" << milkProfit << endl << endl;

	return 0;
}
