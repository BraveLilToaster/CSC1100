#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	string firstName, lastName;
	double salary, raise, updSalary;
	ifstream inData;
	ofstream outData;

	inData.open("inData.txt");
	outData.open("outData.txt");

	for(int i = 0; i < 3; i++) {
		inData >> lastName >> firstName >> salary >> raise;
		updSalary = (salary * raise) + salary;
		outData << firstName << " " << lastName << " " << updSalary << endl; 
	}

	inData.close();
	outData.close();

	return 0;
}
