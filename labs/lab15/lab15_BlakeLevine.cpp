#include <iostream>
#include <string>
using namespace std;

void calc(string, int&, int&, int&, int&, int&);

int main(){
        string str;
        int aCounter = 0, eCounter = 0, iCounter = 0, oCounter = 0, uCounter = 0;
        cout << "Enter a string of text: ";
        getline(cin, str);

        calc(str, aCounter, eCounter, iCounter, oCounter, uCounter);



        cout << "The total number of lowercase a's: " << aCounter << endl;
        cout << "The total number of lowercase e's: " << eCounter << endl;
        cout << "The total number of lowercase i's: " << iCounter << endl;
        cout << "The total number of lowercase o's: " << oCounter << endl;
        cout << "The total number of lowercase u's: " << uCounter << endl;

        return 0;
}

void calc(string str, int& aC, int& eC, int& iC, int& oC, int& uC) {
        for (int i =0; i < str.length(); i++) {
                switch( str.at(i) ){
                        case 'a': 
                                aC++;
                                break;
                        case 'e': 
                                eC++;
                                break;
                        case 'i': 
                                iC++;
                                break;
                        case 'o':
                                oC++;
                                break;
                        case 'u': 
                                uC++;
                                break;
                        default: 
                                break;
                                }
        }
        return;
}
