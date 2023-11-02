#include <iostream>

using namespace std;

int main() {

    double x, y;

    cout << "Enter the coordinates of a point in the XY coordinate system: ";
    cin >> x >> y;

    if (x > 0 && y > 0) {
        cout << "The point lies in the first quadrant." << endl;
    } 
    else if (x < 0 && y > 0) {
        cout << "The point lies in the second quadrant." << endl;
    } 
    else if (x < 0 && y < 0) {
        cout << "The point lies in the third quadrant." << endl;
    } 
    else if (x > 0 && y < 0) {
        cout << "The point lies in the fourth quadrant." << endl;
    } 
    else {
        cout << "The point lies on the axis." << endl;
    }

    return 0;
}