#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	//1
	
	/*int num, sum;
	cin >> num;
	sum = num;

	while (num != -1){
		sum = sum + 2 * num;
		cin >> num;
	}
	cout << "Sum = " << sum << endl;
	*/


	//2
	/*
	int num1, num2;
	int temp = 0;

	cout << "enter 2 ints" ;
	cin >> num1   >> num2;
	cout << endl;

	while (num1 % 3 != num2 % 5){
		temp = num1 + num2;
		num1 = num2;
		num2 = temp;
		cout << temp << " ";

	}
	cout << endl;
	return 0;
	*/

	//3
	/*
	for (int i = 1; i <= 5; i++)
	{
		cout << "*";
		i = i+ 1;
	}
		
	cout << endl;
	*/

	//4
	/*
	int num = 12;

	while (num >= 0) {
		if (num % 5 == 0)
			num++;
			continue;
		cout << num << " ";
		num = num - 2;
	
	}	
	cout << endl;
	*/

	//5
	//
	/*
	int num1, num2;
	int temp = 0;

	cout << "enter 2 ints" ;
	cin >> num1   >> num2;
	cout << endl;

	do {
		temp = num1 + num2;
		num1 = num2;
		num2 = temp;
		cout << temp << " ";
	}

	while (((num1 + num2) % 5) != 0);

	cout << endl;
	return 0;
	*/

	//6 
	int s= 0;

	for (int i = 0; i < 5; i++){
		s = 2 * s + i;
		cout << s << " ";
	}
}


