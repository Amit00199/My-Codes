#include <iostream>

using namespace std;

int decimal_binary(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 2 + 10 * decimal_binary(n / 2);
}

int main() {
    cout << "Enter number in decimal: ";
    int num;
    cin >> num;
    cout << "Binary number: " << decimal_binary(num);

    return 0;
}