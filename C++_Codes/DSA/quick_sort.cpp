#include <iostream>

using namespace std;

void swap(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];

    int i = (low - 1);
 
    for (int j = low; j <= high - 1; j++) {

        if (arr[j] < pivot) {

            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high) {

        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int num;
    cout << "Enter number of elements: ";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << " : ";
        cin >> arr[i];
    }

    quickSort(arr, 0, num - 1);
    printf("Sorted array: \n");
    for (int i = 0; i < num; i++)
        printf("%d ", arr[i]);
    return 0;
}
