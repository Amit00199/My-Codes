#include <iostream>

using namespace std;

int fib(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int fib_sum(int n) {
    if (n == 0) {
        return 0;
    }
    return fib(n) + fib_sum(n - 1);

}

int main() {

    cout << "Enter position till which sum is to be calculated: ";
    int input;
    cin >> input;
    cout << "Sum of fibonacci numbers till " << input << " is " << fib_sum(input);

    return 0;
}