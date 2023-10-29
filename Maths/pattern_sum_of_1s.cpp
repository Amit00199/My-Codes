#include <iostream>

using namespace std;

int main() {
  int n, i, sum = 0, t = 1;

  cout << "Enter the number of terms: ";
  cin >> n;

  for (i = 1; i <= n; i++) {
    cout << t << " ";
    sum = sum + t;
    t = (t * 10) + 1;
  }

  cout << endl;
  cout << "The sum of the series is " << sum << endl;

  return 0;
}