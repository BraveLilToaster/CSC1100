#include<iostream>
#include<fstream>
using namespace std;

void readin(string, double){

int main() {

    string name[10];
    double work[10][3];

    readin(name[], work[][]);

    return;
}

void readin(string name[], double work[][]){

    ifstream infile;

    infile.open("Extra_Credit_1_Data.txt");

    for(int k =0; k<10; k++){
        infile >> name[i];

    }

    //readin to 2d array
    for(int i = 0; i < 10; i++){

        for(int j = 0; j < 3; j++){
           infile >>  work[i][j] ;
            
        }

    }

    infile.close();

    

}
