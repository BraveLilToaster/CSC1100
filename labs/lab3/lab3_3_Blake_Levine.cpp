#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
	double firstMass, secondMass, dist, F;
	const double k = (6.67 * 10E-8);

	cout << "Enter the mass of the first body: ";
	cin >> firstMass;

	cout << "Enter the mass of the second body: ";
	cin >> secondMass;

	cout << "Enter the distance betweem the the two bodies: ";
	cin >> dist;

	F = k * ( (firstMass*secondMass) / pow(dist, 2.0) );
	cout << "F equals " << F << endl;

	return 0;
}
