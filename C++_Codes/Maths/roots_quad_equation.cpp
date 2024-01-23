#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, discriminant, realPart, imaginaryPart;

    cout << "\tTo find the roots of a quadratic equation ax^2+bx+c = 0\n\n";
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        realPart = (-b + sqrt(discriminant)) / (2 * a);
        imaginaryPart = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << realPart << endl;
        cout << "Root 2 = " << imaginaryPart << endl;
    } else if (discriminant == 0) {
        realPart = -b / (2 * a);
        cout << "Roots are real and the same." << endl;
        cout << "Root 1 = Root 2 = " << realPart << endl;
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}