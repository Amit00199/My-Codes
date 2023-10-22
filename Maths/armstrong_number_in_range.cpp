#include <iostream>

using namespace std;

int main() {
  int lower, upper, temp, digit, sum, n;

  cout << "Enter the lower and upper limits: ";
  cin >> lower >> upper;

  cout << "The Armstrong numbers between " << lower << " and " << upper << " are: ";

  for (int i = lower; i <= upper; i++) {
    temp = i;
    sum = 0;
    n = i;
    while (n > 0) {
      digit = n % 10;
      sum = sum + digit * digit * digit;
      n /= 10;
    }

    if (sum == i) {
      cout << i << " ";
    }
  }

  return 0;
}