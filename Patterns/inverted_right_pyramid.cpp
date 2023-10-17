#include <iostream>
  
using namespace std;

int main()
{
    cout << "Enter number of rows: ";
    int rows;
    cin >> rows;

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < rows - i; j++) {
            cout << "* ";
        }
        cout << endl;;
    }
}