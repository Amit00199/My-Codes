#include <iostream>

using namespace std;

int expon(int n, int e) {
    int result = n;
    while (e > 1) {
        result *= n;
        e--;
    }
    return result;
}

int main() {
    int num, exp;
    cout << "Enter number: ";
    cin >> num;
    cout << "Enter exponent: ";
    cin >> exp;

    cout << "Answer: " << expon(num, exp) << endl;
    return 0;
}