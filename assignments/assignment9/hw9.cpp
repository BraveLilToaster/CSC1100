#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

enum fruitType {ORANGE, APPLE, BANANA, GRAPE, STRAWBERRY, MANGO, GUAVA, PINEAPPLE, KIWI};
fruitType fruit;

int main(){

    for (fruit = BANANA; fruit < PINEAPPLE; fruit++;)
        cout << static_cast<int>(fruit) << ", ";
    return 0;


}
