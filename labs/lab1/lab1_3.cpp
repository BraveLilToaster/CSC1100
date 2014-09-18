#include <iostream>
using namespace std;

float num1, num2, num3, num4, num5, avg;


int main(){

	cout << "Input 5 test scores. They may be decimal values." << endl;
	cin >> num1 >> num2 >> num3 >> num4 >> num5; 

	avg = (num1 + num2 + num3 + num4 + num5)/5;

	cout << "Test 1: " << num1 << endl;
	cout << "Test 2: " << num2 << endl;
	cout << "Test 3: " << num3 << endl;
	cout << "Test 4: " << num4 << endl;
	cout << "Test 5: " << num5 << endl;
	cout << "Avg: " << avg << endl;

	return 0;
}
