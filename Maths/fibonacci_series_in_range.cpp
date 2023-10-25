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
  int n;
  cout << "Enter the number of terms: ";
  cin >> n;

  cout << "The first " << n << " terms of the Fibonacci series are: ";

  for (int i = 0; i < n; i++) {
    cout << fib(i) << " ";
  }

  return 0;
}