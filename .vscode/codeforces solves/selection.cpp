#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min1 = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min1]) {
                min1 = j;
            }
        }
        if (min1 != i) {
            swap(arr[i], arr[min1]);
        }
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    selectionSort(arr, n);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

