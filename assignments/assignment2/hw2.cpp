#include <iostream>
#include <string>
using namespace std;

/*
 * #include <cmath>
 *  pow(2.0, 3.0);
 *
 * cin.get();
 *
 * cin.putback('m');
 *
 * ch2 = cin.peek();
 *
 * cin.clear();
 */

int main(){

	int qNum;
	cout << "Enter the problem number: " << endl;
	cin >> qNum;

	//number 2
	if (qNum == 2){
		char qChar;
		cout << "\nNow enter the problem letter: " << endl;
		cin >> qChar;
		
		int num1, num2;
		double x, y;

		if (qChar == 'a') {
			cout <<"\nEnter: 35 28.30 67 12.50" << endl;
			cin >> x >> num1 >> y >> num2;
			}

		else if (qChar == 'b') {
			cout <<"\nEnter: 35 28.30 67 12.50" << endl;
			cin >> num1 >> x >> num2 >> y;
			}

		else if(qChar == 'c') {
			cout <<"\nEnter: 35 28.30 67 12.50" << endl;
			cin >> x >> y >> num1 >> num2;
			}

		else if(qChar == 'd') {
			cout <<"\nEnter: 35 28.30 67 12.50" << endl;
			cin >> num1 >>  num2 >> x >> y;
			}

		else if(qChar == 'e') {
			cout <<"\nEnter: 35 28.30 67 12.50" << endl;
			cin >> num1 >> x >> y >> num2;
			}

		else if(qChar == 'f') {
			cout <<"\nEnter: 35 28.30 67 12.50" << endl;
			cin >> x >> num1 >> num2 >> y;
			}	
		else{
			return 0;
			}
		cout << "\nnum1: " << num1 << "\nnum2: " << num2 << "\nx: " << x << "\ny: " << y << endl;
	}

	//number 3
	else if(qNum == 3){
		char qChar;
		cout << "\nNow enter the problem letter: " << endl;
		cin >> qChar;

		int x, y;
		char symbol;

		//a
		if(qChar == 'a') {
			cin >> x >> y;
			cin.ignore(100, '\n');
			cin >> symbol;
		}

		//b
		else if(qChar == 'b') {
			cin >> x;
			cin.ignore(100, '*');
			cin >> y;
			cin.get (symbol);
		}

		//c
		else if(qChar == 'b') {
			cin >> y;
			cin.ignore(100, '\n');
			cin >> x >> symbol;
		}

		//d
		else if(qChar == 'b') {
			cin.get(symbol);
			cin.ignore(100, '\n');
			cin >> x;
			cin.ignore(100, '*');
			cin >> y;
		}

		//e
		else if(qChar == 'b') {
			cin.ignore(100, '\n');
			cin >> x >> symbol;
			cin.ignore(100, '\n');
			cin.ignore(100, '&');
			cin >> y;
		}
		cout << "x: " << x << "\ny: " << y << "\nsymbol: " << symbol << endl;
	}

	//number 4
	if (qNum == 2){
		char qChar;
		cout << "\nNow enter the problem letter: " << endl;
		cin >> qChar;

		int num;
		char discard;
	}


	return 0;
}
