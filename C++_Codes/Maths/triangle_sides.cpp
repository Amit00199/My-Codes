#include <iostream>
#include <cmath>

using namespace std;

bool isEquilateral(double a, double b, double c) {
    return (a == b) && (b == c);
}

bool isIsosceles(double a, double b, double c) {
    return (a == b) || (b == c) || (a == c);
}

bool isScalene(double a, double b, double c) {
    return !isEquilateral(a, b, c) && !isIsosceles(a, b, c);
}

int main() {
    double a, b, c;

    cout << "Enter the lengths of the sides of the triangle: ";
    cin >> a >> b >> c;

    if (isEquilateral(a, b, c)) {
        cout << "The triangle is Equilateral." << endl;
    } else if (isIsosceles(a, b, c)) {
        cout << "The triangle is Isosceles." << endl;
    } else if (isScalene(a, b, c)) {
        cout << "The triangle is Scalene." << endl;
    } else {
        cout << "The given lengths do not form a valid triangle." << endl;
    }

    return 0;
}