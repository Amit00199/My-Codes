#include <iostream>
  
using namespace std;

int main()
{
    cout << "Enter number of rows: ";
    int rows;
    cin >> rows;

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }

        for (int k = 0; k < rows - i; k++) {
            cout << "* ";
        }
        cout << endl;
    }
  
    return 0;
}