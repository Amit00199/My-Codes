#include <iostream>

using namespace std;

int main() {
    cout << "Enter number of rows: ";
    int rows;
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            cout << " ";
        }
  
        for (int k = 0; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}