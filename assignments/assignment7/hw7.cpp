#include <iostream>
#include <iomanip>
using namespace std;

/*  num2 
int length = 50;
double list[-50];
*/
int main(){

double scores[10] = {2.5, 3.9, 4.8, 6.2, 6.2, 7.4, 7.9, 8.5, 8.5, 9.9};

for(int i = 0; i < 10; i++){
    if(scores[i] >= scores[i+1]){
        if(i+1 >= 10){
            break;
        }
        cout << i << " and " << (i + 1) << " elements of scores are out of order." << endl;
    }
}
}
/* num 4
        int secret(int, int);

        void func(int x, int& y);

        int main() {

                int num1, num2;
                num1 = 6;
                cout << "Enter a positive integer";
                cin >> num2;
                cout << endl;
                cout << secret(num1, num2) << endl;
                num2 = num2 - num1;
                cout << num1 << " " << num2 << endl;
                func(num2, num1);
                cout << num1 << " " << num2 << endl;
                return 0;
        }

        int secret(int a, int b)
        {
                int d;
                d = a + b;
                b = a * d;
                return b;
        }

        void func (int x, int& y)
        {
                int val1, val2;
                val1 = x + y;
                val2 = x * y;
                y = val1 + val2;
                cout << val1 << " " << val2 << endl;
        }
        */
        
/* num 5
        void tryMe(int& v);
        int main()
        {
                int x = 8;
                for (int count = 1; count < 5; count++)
                        tryMe(x);
                return 0;
        }

        void tryMe(int& v) {
                static int num = 2;
                if (v % 2 - 0)
                {
                        num++;
                        v = v + 3;
                }
                else
                {
                        num--;
                        v = v + 5;
                }
                cout << v << ", " << num << endl;
        } 
*/
