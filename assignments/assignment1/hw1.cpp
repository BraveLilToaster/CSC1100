#include <iostream>
#include <string>
using namespace std;

int main (){
	int testNum;
	cin >> testNum;

	if(test
/*	int x = 3, y = 18;
	double z = 9.5, w = 3.5;

	cout << (x + y) % y << endl;
	cout << x % y - w << endl;
	cout << (y + z) / w << endl;
	cout << x * z % y + w << endl;
	cout << (x % y) * z << endl;
	cout << (x * y % z) -w << endl;
	cout << x % (y + z) << endl;
	cout << (x % y + z) / w << endl;
	cout << x % z << endl;
*/
/*
	int x, y, z;
	double w ,t;
	
	x=38;
	y=x-10;
	x=2*x+y-3;
	z=y%(x+2);
	w=3.0 * y + z + 6.5 -7 % 3;
	t = x / 4.0 + 17 / 4 - y % 4;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	cout << "w = " << w << endl;
	cout << "t = " << t << endl;
*/
/*
	int a, b;
	double c;

	a = 32;
	b = 16;
	c = 4.5;

	cout << a - b * c << endl;
	cout << a / 2 - c << endl;
	cout << a / static_cast<double> (b) + 3.5 * c << endl;
	cout << 62 % 28 + 6.3 + a / (c + 0.5) << endl;
	cout << 5 - static_cast<int> (c) % 3 + a - b << endl;
	cout << 22.5 / 2 + 14.0 * 3.5 + 28 << endl;

	//cout << a - b * c << endl;
	//cout << a / 2 - c << endl;
	//cout << a / static_cast<double> (b) + 3.5 * c << endl;
	//cout << 62 % 28 + 6.3 + a / (c + 0.5) << endl;
	//cout << 5 - static_cast<int> (c) % 3 + a - b << endl;
	//cout << 22.5 / 2 + 14.0 * 3.5 + 28 << endl;
*/

	int a, b, c;
	a = 5;
	b = 6;
	
	a = (b++) + 3;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	c = 2 * a + (++b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	b = 2 * (++c) - (a++);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	return 0;
}
