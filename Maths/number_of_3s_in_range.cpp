#include <iostream>

using namespace std;

int count_digit_3(int n) {
  int count = 0;
  for (int i = 0; i <= n; i++) {
    int temp = i;
    while (temp > 0) {
      if (temp % 10 == 3) {
        count++;
      }
      temp /= 10;
    }
  }
  return count;
}

int main() {
  int n;
  cout << "Enter the number n: ";
  cin >> n;

  int number_of_3s = count_digit_3(n);
  cout << "The number of times digit 3 occurs in each and every number from 0 to " << n << " is " << number_of_3s << endl;

  return 0;
}