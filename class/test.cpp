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

	 int row;
         for (int row = 0; row <=5; row++) {
 
                 for(int col = 0; col < row; col++){
 
                         cout << "*";
                 }
                 cout << endl;
 
         }
 
         cout << row;
	return 0;
}


