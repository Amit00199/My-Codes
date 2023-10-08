#include <iostream>

using namespace std;
  
int main()
{
    cout << "Enter number of rows: ";
    int rows;
    cin >> rows;

    int n = 1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            cout << n++;
        }
        cout << endl;
    }
    return 0;
}