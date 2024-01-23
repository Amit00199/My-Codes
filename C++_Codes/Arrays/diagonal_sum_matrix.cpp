#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter dimension of square matrix: ";
    cin >> n;
    int arr[n][n];
    cout << "\nEnter elements of matrix: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        sum1 += arr[i][i];
    }
    for (int i = 0; i < n; i++) {
        sum2 += arr[i][n-1-i];
    }
    
    cout << "Sum of left to right diagonal: " << sum1 << endl;
    cout << "Sum of right to left diagonal: " << sum2 << endl;

    return 0;
}