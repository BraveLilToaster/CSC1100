#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){

    /*
    int *tempList;
    int num = 3;

    tempList = new int[7];
    tempList[6] = 4;

    for(int j =5; j>=0; j--)
        tempList[j] = tempList[j+1] + j * num;
    for(int j = 0; j < 7; j++)
        cout << tempList[j] << " ";
    cout << endl;
     
    return 0;
*/

    int x;
    double *p;
    p = new double[5];

    for (int i = 0; i < 5; i++)
        p[i] = pow(i,2.0);
    for(auto x: p)
        cout << x << " ";
    cout << endl;

    itn
}
