#include <iostream>

using namespace std;

int main() {
    int p, t;
    double r;
    cout << "This program calculates the Simple Interest for the given Principal, Time and Rate of Interest\n";
    cout << "Enter Principal Amount: ";
    cin >> p;
    cout << "Enter Time Period: ";
    cin >> t;
    cout << "Enter Rate of Interest: ";
    cin >> r;
    
    cout << "The SI on " << p << " at " << r << "\% for " << t << " years is: " << (p*r*t)/100 << endl;

    return 0;
}