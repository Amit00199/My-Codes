#include <iostream>

using namespace std;

int binary_decimal(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + 2 * binary_decimal(n / 10);
}

int main() {

    cout << "Enter number in binary: ";
    int num;
    cin >> num;
    cout << "Decimal number: " << binary_decimal(num);
    return 0;
}