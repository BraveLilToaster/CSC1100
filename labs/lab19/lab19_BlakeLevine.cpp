#include <iostream>
using namespace std;

//enum declaration
enum triangleType {scalene, isosceles, equilateral, noTriangle};

//function declaration
triangleType triangleShape(int, int, int); 

int main(){
    int side1, side2, side3;
    triangleType result;

    cout << "Enter the the length of three sides of a triangle: " << endl;
    cin >> side1 >> side2 >> side3 ;
    result = triangleShape(side1, side2, side3);

    //outputs the type of triangle
    switch(result){
        case equilateral:
            cout << "The Triangle is equilateral." << endl;
            break;
        case noTriangle:
            cout << "That is not a Triangle." << endl;
            break;
        case isosceles:
            cout << "The Triangle is isosceles." << endl;
            break;
        case scalene:
            cout << "The Triangle is scalene." << endl;
            break;
    }

    return 0;
}

triangleType triangleShape(int side1, int side2, int side3) {

    triangleType result;
    //equilateral
    if(side1 == side2 && side2 == side3){
        result = equilateral;
    }
    //noTriangle
    else if(side1+side2 < side3 || side2+side3 < side1 || side3+side1 < side2){
        result = noTriangle;
    }
    //isosceles
    else if(side1 == side2 || side2 == side3 || side3 == side1){
        result = isosceles;
    }
    //scalene
    else {
        result = scalene;
    }

    return result;

}
