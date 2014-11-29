#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int alpha[10][20];
    for(int k = 0; k < 20; k++){
        for(int l=0; l < 1; l++){
            alpha[l][k] = 5;
        }
        for(int h=1; h < 10; h++){
            alpha[h][k] = (alpha[h-1][k])*2;
        }
    }

    for(int o = 0; o < 10; o++){
        for(int y = 0; y < 20; y++){
            cout << alpha[o][y];
        } 
        cout << endl;
    }
/*
    char name[8] = "Shelly";

//    cout << "a) " << name << endl;

   for (int i = 0; i < 6; i++) 
        cout << name[8] << endl;
    int j = 0;
    while (name[j] != '\0')
        cout << name[j++];
*/
/*
    int k =0;
    while (k < 8)
        cout << name[k++];

*/
}
