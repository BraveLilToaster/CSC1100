#include <iostream>
#include <iomanip>
using namespace std;

/*  num 3
int mystery(int x, int y , int z);

int main(){
        cout << mystery(7, 8 ,3) << endl;
        cout << mystery(10, 5 ,30) << endl;
        cout << mystery(9, 12, 11) << endl;
        cout << mystery(5, 5 ,8) << endl;
        cout << mystery(10, 10 ,10) << endl;

        return 0;
}

int mystery(int x, int y , int z) {
        if (x <= y && x <= z)
                return (y + z - x);
        else if (y <= z && y <= x)
                return (z + x- y);
        else
                return (x + y - z);
}

*/

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
