#include <iostream>
#include <cmath>

using namespace std;

int find_len(int n) {
    if (n == 0) {
        return 1;
    }
    int count = 0;
    count = 1 + find_len(n / 10);

    return count;
}

int rev(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10 * pow(10, find_len(n) - 1)) + rev(n / 10);
}

int main() {
    cout << "Enter a number: ";
    int input;
    cin >> input;
    int rever = rev(input) / 10;
    cout << "Reversed number: " << rever << endl;

    return 0;
}
