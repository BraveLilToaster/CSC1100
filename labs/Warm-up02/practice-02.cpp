//Input Using cin >>
//
// Program by: Blake Levine
#include <iostream>
#include <string>
using namespace std;

int main(){
	float x;
	int y;
	char ch1,ch2;
	string name;

	cout << "Enter a Character:";
	cin >> ch1;
	cout << "Enter a number:";
	cin >> y;
	cout << "Enter a another Character:";
	cin >> ch2;
	cout << "Enter a name:";
	cin >> name;
	cout << "Enter a floating point value:";
	cin >> x;

	//Display the values
	cout << endl << "ch1 = " << ch1 << endl;
	cout << endl << "y = " << y << endl;
	cout << endl << "ch2 = " << ch2 << endl;
	cout << endl << "name is " << name << endl;
	cout << endl << "x = " << x << endl;
	return 0;
}
