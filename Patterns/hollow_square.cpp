#include <iostream>

using namespace std;

int main()
{
    cout << "Enter number of rows: ";
    int rows;
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            if (i > 0 && i < rows - 1 && j > 0
                && j < rows - 1) {
                cout << "  ";
            }
            else {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}