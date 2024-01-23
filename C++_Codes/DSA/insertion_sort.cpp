#include <iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
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

	insertionSort(arr, num);
	
	for (int i = 0; i < num; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}
