#include <iostream>
#include <string>

using namespace std;

int main () {
    char alpha[30] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
    string input;
    cout << "Enter word(lowercase only): ";
    getline(cin, input);
    string output(input.length(), ' '); // initialize output with the same length as input
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            output[i] = ' ';
        }
        else {
            int j = 0;
            do {
                output[i] = alpha[j];
                cout << output << endl;
                j++;
            } while (output[i] != input[i]);
        }
    }

    return 0;
}