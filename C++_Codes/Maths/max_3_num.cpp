#include <iostream>

using namespace std;

int find_max(int input_1, int input_2, int input_3) {
    int max;
    if (input_1 < input_2) {
        max = input_2;
            if (input_2 < input_3) {
                max =  input_3;
            }
            else {
                max = input_2;
            }
    }
    else {
        max = input_1;
        if (input_1 > input_3) {
            max =  input_1;
        }
        else {
            max = input_3;
        }
    }

   return max; 
}

int main () {
    int input_1, input_2, input_3;
    cout << "Enter three numbers: "; 
    cin >> input_1 >> input_2 >> input_3;
    cout << "Max: " << find_max(input_1, input_2, input_3);
    
    return 0;
}