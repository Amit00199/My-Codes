#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter number of elements: ";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << " : ";
        cin >> arr[i];
    }

    int search;
    cout << "\nEnter number to be searched: ";
    cin >> search;

    int index;
    for (int i = 0; i < num; i++) {
        if(arr[i] == search) {
            index = i+1;
        }
    }

    cout << "Element present at index: " << index << endl;

    return 0;
}