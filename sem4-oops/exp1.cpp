// Write a program to compute the area of triangle and circle by overloading the area()
// function.

#include <iostream>

    using namespace std;

class Shape {
public:
    // Overloaded area function for computing the area of a triangle
    double area(double base, double height) {
        return 0.5 * base * height;
    }

    // Overloaded area function for computing the area of a circle
    double area(double radius) {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Shape shape;

    double base, height, radius;
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Area of the triangle: " << shape.area(base, height) << endl;
    cout << "Area of the circle: " << shape.area(radius) << endl;

    return 0;
}
