#include <iostream>
using namespace std;

int num1, num2, num3, avg;

int main(){
	num1 = 125;
	num2 = 28;
	num3 = -25;
	cout << "Input 3 numbers. They must be integers." << endl;

	avg = (num1 + num2 + num3)/3;

	cout << "Test 1: " << num1 << endl;
	cout << "Test 2: " << num2 << endl;
	cout << "Test 3: " << num3 << endl;
	cout << "Avg: " << avg << endl;

	return 0;
}

