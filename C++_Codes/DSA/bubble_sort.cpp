#include <iostream>

using namespace std;

void swap(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main() {

    int num;
    cout << "Enter number of elements: ";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << " : ";
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            if (arr[j+1] < arr[j]) {
                swap(arr[j+1], arr[j]);
            }
        }
    }

    cout << "\nSorted Array: ";
    for (int i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}