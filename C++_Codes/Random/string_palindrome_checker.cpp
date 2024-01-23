#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Input string: ";
    string input;
    cin >> input;
    int len = input.length();
    bool isPallindrome = true;
    for (int i = 0; i < len/2; i++) {
        if (input[i] != input[len - i - 1]) {
            isPallindrome = false;
            break;
        }
    }
    if (isPallindrome) {
        cout << "The string is a pallindrome." << endl;
    } else {
        cout << "The string is not a pallindrome." << endl;
    }
    return 0;
}