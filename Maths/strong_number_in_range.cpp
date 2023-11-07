#include <iostream>
using namespace std;

int fact(int num) {
  if (num == 0) {
    return 1;
  } else {
    return (num * fact(num - 1));
  }
}

int main() {
  int start, end;
  cout << "Enter the lower limit: ";
  cin >> start;
  cout << "Enter the upper limit: ";
  cin >> end;

  for (int i = start; i <= end; i++) {
    int sum = 0;
    int num = i;

    while (num != 0) {
      sum =  sum + fact(num % 10);
      num /= 10;
    }

    if (sum == i) {
      cout << i << " ";
    }
  }

  cout << endl;
  return 0;
}

