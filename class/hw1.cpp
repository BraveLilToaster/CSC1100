#include <iostream>
using namespace std;

int main (){
	int x = 3, y = 18;
	double z = 9.5, w = 3.5;

	cout << (x + y) % y << endl;
	cout << x % y - w << endl;
	cout << (y + z) / w << endl;
	cout << x * z % y + w << endl;
	cout << (x % y) * z << endl;
	cout << (x * y % z) -w << endl;
	cout << x % (y + z) << endl;
	cout << x % (y + z) << endl;

	return 0;

}
