#include<iostream>
using namespace std;

int main(){
	int count, num, oddSum = 0, evenSum;
	
	cout << "How many numbers would you like to enter: ";
	cin >> count;

	for(int i; i < count; i++){
		cout << "Enter an integer: ";
		cin >> num;
		
		if(num%2 == 1) {
			oddSum += num;
		}
		else if(num%2 == 0) {
			evenSum += num;
		}
		
	}
	cout << "Sum of odd numbers: " << oddSum << endl;
	cout << "Sum of even numbers: " << evenSum << endl;


	return 0;
}
