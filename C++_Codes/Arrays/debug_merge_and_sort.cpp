#include <iostream>

// using namespace std;

void swap(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

//compare with all values of arr1 && with all values of arr2
void merge_sort(int arr1[], int arr2[], int arr3[], int number_of_elements_1, int number_of_elements_2) {
    int min_index_1, min_index_2;
    int k = 0;
    for (int i1 =0, i2 = 0; i1 < number_of_elements_1, i2 < number_of_elements_2;) {
    min_index_1 = i1;
    min_index_2 = i2;
        for (int j = i1 + 1; j < number_of_elements_1; j++) {
            if (arr1[j] < arr1[min_index_1]) {
                min_index_1 = j;
            }
        }
        
        for (int j = i2 + 1; j < number_of_elements_2; j++) {
            if (arr2[j] < arr2[min_index_2]) {
                min_index_2 = j;
            }
        }
        

        if (arr1[min_index_1] < arr2[min_index_2]) {
            arr3[k] = arr1[min_index_1];
            k++;
            swap(arr1[min_index_1], arr1[i1]);
            i1++;
        }
        else {
            arr3[k] = arr2[min_index_2];
            k++;
            swap(arr2[min_index_2], arr2[i2]);
            i2++;
        }
    }
}

int main() {

int number_of_elements_1, number_of_elements_2;
//defining first array
std::cout << "Enter the number of elements in arr1: ";
number_of_elements_1 = 5;
// int arr1[number_of_elements_1];
std::cout << "Enter the elements of arr1: ";
int arr1[5] = {9, 5, 1, 8, 10};

//defining second array
std::cout << "Enter the number of elements in arr2: ";
number_of_elements_2 = 5;
// int arr2[number_of_elements_2];
std::cout << "Enter the elements of arr2: ";
int arr2[5] = {4, 6, 2, 3, 7};

int arr3[number_of_elements_1 + number_of_elements_2];

merge_sort(arr1, arr2, arr3, number_of_elements_1, number_of_elements_2);

//printing arr3
for (int i = 0; i < number_of_elements_1 + number_of_elements_2; i++) {
    std::cout << arr3[i] << " ";
}
std::cout << std::endl;

return 0;
}