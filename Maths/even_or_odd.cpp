#include <iostream>

using namespace std;

int main() {
    cout << "\t\tThis program finds out if the given number is even or odd\n";
    int input;
    cout << "Enter number: ";
    cin >> input;
    string result = (input%2 == 0) ? "The entered number is even" : "The entered number is odd";
    cout << result << endl;

    return 0;
}