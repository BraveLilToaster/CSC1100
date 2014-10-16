#include <iostream>
using namespace std;

int main(){
	double yardLength, treeRadius, treeSpace, totalSpace;
	int totalTrees;

	cout << "Enter the length of the yard:" << endl;
	cin >> yardLength;

	cout << "\nEnter the radius of a fully grown tree:" << endl;
	cin >> treeRadius;

	cout << "\nEnter the required space betweena fully grown tree:" << endl;
	cin >> treeSpace;

	totalTrees = 1 + ((yardLength - (2 * treeRadius))/((2 * treeRadius) + treeSpace));
	totalSpace = 3.14159*(treeRadius*treeRadius);

	cout << "The number tree that can be planted in the yard is " << totalTrees << ", and the number space occupied by the trees wil be " << totalSpace << "." << endl;

	return 0;
}

