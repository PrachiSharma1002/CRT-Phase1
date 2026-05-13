#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n);


void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool flag = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap two elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                flag = true;
            }
        }

        if (!flag) {
            cout << "Array already sorted" << endl;
            break;
        }
    }
}

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int size = 5;

    bubble_sort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}