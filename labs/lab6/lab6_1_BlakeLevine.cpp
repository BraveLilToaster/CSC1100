#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double markup, total, profit, merchCost, rent, salary, elect;

	cout << "Enter the total merchandise cost: ";
	cin >> merchCost;

	cout << "Enter the total cost of employee salary: ";
	cin >> salary;

	cout << "Enter the yearly rent: ";
	cin >> rent;

	cout << "Enter the estimated electricity cost: ";
	cin >> elect;

	total = merchCost + salary + rent + elect;

	profit = .1 * merchCost;

	markup = (total + profit)/(merchCost * .85) * 100;
	
	cout << showpoint << fixed << setprecision(2);
	cout << "the total mark should be : " << markup << "%" << endl;

	return 0;
}
