#include <iostream>
using namespace std;

int main(){
	int numStudents;
	double totalCalories, studentCalories, calFruit, calNuts, schoolCalories, totalLbs;
	
	cout << "\nEnter the number of Students in School: ";
	cin >> numStudents;
	cout << "\nEnter the number of calories required for each student: ";
	cin >> studentCalories;
	cout << "\nEnter the number of calories in a pound of nuts: ";
	cin >> calNuts;

	//calories of fruit
	calFruit = calNuts / .70;

	//total calories for school
	schoolCalories = numStudents * studentCalories;

	//lbs needed of both fruits and nuts
	totalLbs = schoolCalories / ((calFruit + calNuts)/2);

	cout << "\nAmount of nuts needed is " << totalLbs/2 << " lbs. Amount of fruit needed is " << totalLbs/2 << " lbs." << endl;

	return 0;
}
