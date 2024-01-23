#include <iostream>

using namespace std;

int fib(int n) {
  if (n <= 1) {
    return n;
  } else {
    return fib(n - 1) + fib(n - 2);
  }
}

int main() {
    int num;
    cout << "Which fibonacci number would you like: ";
    cin >> num;
    cout << "Required fibonacci number is: " << fib(num-1) << endl;
    return 0;
}