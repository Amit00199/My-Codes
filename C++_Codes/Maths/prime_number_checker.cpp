#include <iostream>
#include <cmath>

using namespace std;

void ask_number() {
    cout << "This program checks if a given number is a prime number\n";
    cout << " \n";
    cout << "Enter the number to be checked: ";
}

bool prime_number_check(int input_number) {
    bool result;
    int sqrt_input;
    sqrt_input = sqrt(input_number);
    for (int i = 2; i <= sqrt_input; i++) {
        int check;
        check = input_number % i;
            if (check == 0) {
                cout << "The number is divisble by " << i << endl;
                result = 0;
                break;
            }
            else {
                result = 1;
                continue;
            }
    }    
    return result;
}


int main () {
    cout << boolalpha;
    int input_number;
    ask_number();
    cin >> input_number;
        if (input_number == 0) {
            cout << "0 is neither prime nor composite\n";
        }

        else if (input_number == 1) {
            cout << "1 is neither prime nor composite\n";
        }

        else if (input_number == 2) {
            cout << "2 is the only even prime number\n";
        }
        else {
           cout << input_number << " is a prime number: " << prime_number_check(input_number) << endl;
            
        }
    return 0;
}
