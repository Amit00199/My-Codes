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
        for (int j = 0; j < num - 1-i; j++) { 
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    cout << "\nArray after sorting: ";
    for (int i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }

    int search;
    cout << "\nEnter number to be searched: ";
    cin >> search;

    int high = num - 1, mid, low = 0, index;
    int flag = 0;
    while (high >= low) {
        int mid = low + (high - low)/2;
        if (arr[mid] == search) {
            index = mid;
            flag = 1;
            break;
        }
        else if(search > arr[mid]) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }
    if (flag == 1) {
    cout << "\nElement is present at index: " << index+1 << endl;
    }
    else {
        cout << "\nElement is not present" << endl;
    }

    return 0;
}