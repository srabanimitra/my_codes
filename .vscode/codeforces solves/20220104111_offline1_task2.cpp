#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr) {
    int n1 = arr.size();
    for (int i = 1; i < n1; ++i) {
        int n2 = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > n2) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = n2;
    }
}

int binarySearch(const vector<int>& arr, int t) {
    int l= 0, high = arr.size() - 1;
    while (l <= high) {
        int mid = l + (high - l) / 2;
        if (arr[mid] == t) {
            return mid;
        } else if (arr[mid] < t) {
            l = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    insertionSort(v);
    cout << "Vector after insertion sort: ";
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;

    int t;
    cin >> t;

    int searchResult = binarySearch(v, t);

    if (searchResult != -1) {
        cout << t << " found at index " << searchResult << endl;
    } else {
        cout << t << " not found in the vector" << endl;
    }

    return 0;
}
