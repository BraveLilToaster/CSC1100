//project1
#include <iostream>
using namespace std;
void sr (char YY , char y , char Y , char year , char sr, double TotalDiscount , double Price, char traincount);
int main()
{
    char sr, year, traincount;
    cout<<"Are you a senior citizen"<<endl;
    cin>>sr;
    cout<<"Have you paid for more than 12 months"<<endl;
    cin>>year;
    cout<<"Have you received more than 5 personal training sessions?"<<endl;
    cin>>traincount;
    
    return 0;
}
void sr (char YY , char y , char Y , char year ,char sr, double TotalDiscount , double price , char traincount){
    
    if (sr == 'Y' || sr =='y'){
        TotalDiscount=.30;
        }
        if (year == 'Y' || year == 'y'){
            TotalDiscount = .45;
        }
        if (traincount){
            TotalDiscount = .65;
            price = .35 * price;
        }

        else if (year == 'Y' || year== 'y')
        {
            price= .85 * price;
        }
    
        else if (traincount =='Y' || traincount== 'y'){
            price= price*.8;
        }
}


