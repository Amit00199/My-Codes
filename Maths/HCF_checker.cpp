#include <iostream>

using namespace std;

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

int main() {
  int num1, num2;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  int hcf = gcd(num1, num2);
  cout << "The HCF of " << num1 << " and " << num2 << " is " << hcf << endl;

  return 0;
}