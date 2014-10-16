#include <iostream>
#include <cmath>
using namespace std;

int main (){
	int numOfItemsBought = 5, shippingCharges;

	if (numOfItemsBought >= 10)
		{
		shippingCharges = 0.0;
		cout << "1" << endl;
		}
	else if (5 <= numOfItemsBought && numOfItemsBought < 10)
		{
		shippingCharges = 3.00 * numOfItemsBought;
		cout << "2" << endl;
		}
	else if (0 < numOfItemsBought && numOfItemsBought < 5)
	{
		shippingCharges = 7.00 * numOfItemsBought;
		cout << "3" << endl;
	}


	return 0;
}
