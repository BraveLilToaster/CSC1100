#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int num, snum, divisor = 3, prime = 0;

	cout << "Enter a positive a number to determine if it is prime: ";
	cin >> num; 
	cout << endl;

	//sqr root of num
	//snum =

	if(num < 1) {
		cout << "Not a positve number. Try again." << endl << endl;
	}
	else if(num%2 == 0){
		cout << num <<" is not prime." << endl;
	}
	else if(num%2 == 1) {
		snum = sqrt((double)num);
		while(divisor <= snum) {
			if (num % divisor == 0){
				cout << num << " is not prime." << endl << endl;
				prime = 1;
				break;
			}
			else {
				divisor = divisor +2;
			}
		}
		if(prime == 0) {
			cout << num << " is prime." << endl << endl;
		}
	}

	return 0;

}
