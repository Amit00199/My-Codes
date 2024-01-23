#include <iostream>

using namespace std;

int main() {
    cout << "Enter number of rows: ";
    int rows;
    cin >> rows;

    for (int i = 0; i < 2 * rows - 1; i++) {
        int comp;
        if (i < rows) {
            comp = 2 * (rows - i) - 1;
        }
        else {
            comp = 2 * (i - rows + 1) + 1;
        }

        for (int j = 0; j < comp; j++) {
            cout << " ";
        }

        for (int k = 0; k < 2 * rows - comp; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}