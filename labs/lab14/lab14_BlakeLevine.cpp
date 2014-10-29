#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2);
double radius(double x1, double y1, double x2, double y2); 
double circumf(double rad, double PI); 
double area(double rad, double PI); 

int main() {
        int x1, y1, x2, y2;
        const double PI =3.1416;
        cout << "Enter the x, then y coordinates of the center of a circle: ";
        cin >> x1 >> y1;        
        cout << "Enter the x, then y coordinates of the point on a circle: ";
        cin >> x2 >> y2;        
        double rad = radius(x1, y1, x2, y2);

        cout << "Radius: " << distance(x1, y1, x2, y2) << endl;
        cout << "Diameter: " << 2 * rad << endl;
        cout << "Circumference: " << circumf(rad, PI) << endl;
        cout << "Area: " << area(rad, PI) << endl;

}

double distance(double x1, double y1, double x2, double y2) {
        double d = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));
        return d;
}
double radius(double x1, double y1, double x2, double y2) {
        double rad = distance(x1, y1, x2, y2);
        return rad;
}
double circumf(double rad, double PI) {
        double circ = 2 * PI * rad;
        return circ;
}
double area(double rad, double PI) {
        double are = PI * pow(rad, 2.0);
        return are;
}
