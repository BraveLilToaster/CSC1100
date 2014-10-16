#include <iostream>
#include <cmath>
using namespace std;

int windchill (double w, double t);

int main() {
	double x, windspeed, temp;
	cout << "Enter the windspeed: ";
	cin >> windspeed;
	cout << "Enter the Temperature: ";
	cin >> temp;
	x = windchill(windspeed, temp);
	cout << "The windchill today is " << x << endl;
}

int windchill(double w, double t) {
	w = 35.74 + .6215 * t - 35.75 * pow(w,.16) + .4275 * t * pow(w,.16);
	return w;

}
