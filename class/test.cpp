#include <iostream>
using namespace std;


int main(){
	int counter;

	counter = 5 ;
	counter =  counter-1;
	cout << counter << endl;

	counter = 5 ;
	counter = counter--;
	cout << counter << endl;

	counter = 5 ;
	counter  = --counter;
	cout << counter << endl;

	return 0;
}


