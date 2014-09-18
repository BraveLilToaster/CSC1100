//
//
//programmed by: Blake Levine
#include <iostream>
#include <sstream>
using namespace std;

int a = 20, b = 7;
double x =20, y =7, z=0;

int main(){
	z = a + b;
	cout << a <<" + " << b << " = " <<  z << endl;
	z = a - b;
	cout << a <<" - " << b << " = " <<  z << endl;
	z = b - a;
	cout << b <<" - " << a << " = " << z << endl;
	z = a * b;
	cout << a <<" * " << b << " = " << z << endl;
	z = a / b;
	cout << a <<" / " << b << " = " << z << endl;
	z = x / y;
	cout << x <<" / " << y << " = " << z << endl;
	z = a%b;
	cout << a <<" % " << b << " = " << z << endl;
	z = b%a;
	cout << b <<" % " << a << " = " << z << endl;

	return 0;
}
