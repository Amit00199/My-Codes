#include <iostream>

using namespace std;

int main () {

    cout << "Enter number of rows: ";
    int rows;
    cin >> rows;
    int i, j; 
    for (i = 1; i <= rows; i++) 
    { 
        for (j = 1; j <= rows - i; j++) 
            cout << " "; 

        if (i == 1 || i == rows) 
            for (j = 1; j <= rows; j++) 
                cout << "*"; 
                 
        else
            for (j = 1; j <= rows; j++) 
                if (j == 1 || j == rows) 
                    cout << "*"; 
                else
                    cout << " "; 
        cout << endl; 
    } 
}