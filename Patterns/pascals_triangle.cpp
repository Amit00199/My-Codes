#include <iostream>

using namespace std;
  
int main()
{
    cout << "Enter number of rows: ";
    int rows;
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            cout << " ";
        }
  
        int C = 1; 
        for (int k = 1; k <= i; k++) {
            cout << C << " ";
            C = C * (i - k) / k;
        }
        cout << endl;
    }
    return 0;
}