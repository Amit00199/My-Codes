#include <iostream>

using namespace std;

bool isPalindrome(int n) {
    int reverse = 0, temp = n;

    while (temp > 0) {
    reverse = reverse * 10 + temp % 10;
    temp /= 10;
    }

  return n == reverse;
}

int main() {
int n;
cout << "Enter the number: ";
cin >> n;

if (isPalindrome(n)) {
cout << n << " is a palindrome." << endl;
} 
else {
cout << n << " is not a palindrome." << endl;
}

  return 0;
}