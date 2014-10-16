#include <iostream>
#include <string>
#include <fstream>
using namespace std;

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
		else if(qChar == 'c') {
			cin >> y;
			cin.ignore(100, '\n');
			cin >> x >> symbol;
		}

		//d
		else if(qChar == 'd') {
			cin.get(symbol);
			cin.ignore(100, '\n');
			cin >> x;
			cin.ignore(100, '*');
			cin >> y;
		}

		//e
		else if(qChar == 'e') {
			cin.ignore(100, '\n');
			cin >> x >> symbol;
			cin.ignore(100, '\n');
			cin.ignore(100, '&');
			cin >> y;
		}
		cout << "x: " << x << "\ny: " << y << "\nsymbol: " << symbol << endl;
	}

	//number 4
	if (qNum == 4){
		char qChar;
		cout << "\nNow enter the problem letter: " << endl;
		cin >> qChar;

		cin.ignore();

		int num;
		char discard;
		if(qChar == 'a') {
			cin.get(discard);
			cin >> num;
		}
		if(qChar == 'b') {
			discard = cin.peek();
			cin >> num;
		}
		if(qChar == 'c') {
			cin.get(discard);
			cin.putback (discard);
			cin >> discard;
			cin >> num;
		}
		cout << "num: " << num << endl <<"discard: " << discard << endl;
	}

	//number 5
	if (qNum == 5){
		char qChar;
		cout << "\nNow enter the problem letter: " << endl;
		cin >> qChar;


		int age;
		string name;
		
		cin >> age;
		getline(cin, name);

		cout << "name: " << name << endl << "age: " << age << endl;
		//input number 1
		//23 Lance Grant
		//input number 2
		//23 
		//Lance Grant
	}

	//number 6
	if (qNum == 6){
		cin.ignore();

		int num1, num2;
		ifstream infile;
		ofstream outfile;

		infile.open("input.dat");
		outfile.open("output.dat");
		infile >> num1 >> num2;
		outfile << "Sum == " << num1 + num2 << endl;
		infile.close();
		outfile.close();
		
		return 0;

	}
/*
	if (qNum == 7){
		char qChar;
		cout << "\nNow enter the problem letter: " << endl;
		cin >> qChar;

		double distance = 375, speed = 58, travelTime;
		ifstream infile;

		outfile.open("travel.dat");
		outfile << showpoint << fixed << setprecsion(2);
		outfile << "Speed: " << speed << endl;
		outfile << "Distance: " << distance << endl;
		outfile << "Day: " << day << endl;

		travelTime = ;
		outfile << "Travel Time: " << travelTime << endl;
	}

	return 0;
	*/
}
