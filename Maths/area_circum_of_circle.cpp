#include <iostream>

using namespace std;

int main() {
    int rad;
    float circum, area;
    
    cout << "Enter Radius of Circle: \n";
    cin >> rad;
    circum = 2*3.14*rad;
    area = 3.14*rad*rad;
    cout << "Circumference: " << circum << endl;
    cout << "Area: " << area << endl;
    
    return 0;
}