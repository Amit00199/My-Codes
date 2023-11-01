#include <iostream>

using namespace std;

bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  int n;
  cout << "Enter the number of prime numbers: ";
  cin >> n;

  int sum = 0;
  int i = 2;
  while (n > 0) {
    if (isPrime(i)) {
      cout << i << " ";
      sum += i;
      n--;
    }
    i++;
  }

  cout << endl;
  cout << "The sum of the prime numbers is " << sum << endl;

  return 0;
}