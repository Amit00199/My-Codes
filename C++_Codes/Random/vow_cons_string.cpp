#include <iostream>
#include <string>

using namespace std;

int main() {

    string input;
    cout << "Enter string: ";
    cin >> input;
    int vow = 0;
    int len = input.length();
    for (int i = 0; i < input.length(); i++) {
        if ((input[i] == 'a') || (input[i] == 'A') || (input[i] == 'e') || (input[i] == 'E') || (input[i] == 'i') || (input[i] == 'I') 
        || (input[i] == 'o') || (input[i] == 'O') || (input[i] == 'u') || (input[i] == 'U')) {
            vow++;
        }
    }

    cout << "Number of vowels in the given string is: " << vow << endl;
    cout << "Number of consonants in the given string is: " << (input.length() - vow) << endl;
        

    return 0;
}