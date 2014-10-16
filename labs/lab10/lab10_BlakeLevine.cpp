#include <iostream>
using namespace std;

int main(){
	int num1, num2, count, sum;
	double sqt;
	char charUp;

	cout << "Enter an integer: ";
	cin >> num1;

	cout << "\nEnter an integer bigger than the first integer: ";
	cin >> num2;

	//b output odd numbers between num1 and num2
	cout << "\nAll odd numbers between " << num1 << " and " << num2 << " " << endl;
	count = num1;
	while(count < num2) {
		
		if(count%2 != 0 && count != num1){
			cout << count << " ";
		}
		count++;

	};
	
	//c output sum of all even numbers between num1 and num2
	cout << "\n\nSum of all even numbers between " << num1 << " and " << num2 << " " << endl;
	count = num1;
	while(count < num2) {
		
		if(count%2 == 0 && count !=num1) {
			sum = sum + count;
		}
		count++;

	}
	cout << sum;

	//d outout numbers and thier squares between 1 and 10
	cout << "\n\nNumbers 1 through 10 and their squares: " << endl;
	count = 1;
	while(count <= 10) {
		sqt = count * count;
		cout << count << ": " << sqt << endl;
		count++;
	};

	//e sum of squares of odd numbers between num1 and num2
	cout << "\nSum of squares of odd number between num1 and num2: " << endl;
	count = num1;
	sum = 0;
	while(count < num2) {
		if(count%2 != 0 && count != num1){
		//	cout << count << ", ";
			sqt = count * count;
		//	cout << sqt << ", ";
			sum = sum + sqt;
		//	cout << sum << endl;
		}
		count++;
	};
	cout << sum << endl;

	//f
	cout << "\nNumbers 1 through 10 and their squares: " << endl;
	charUp = 'A';
	while(charUp <= 'Z'){
		cout << charUp;  
		charUp++;

	};
	cout << endl << endl;

	return 0;
}
