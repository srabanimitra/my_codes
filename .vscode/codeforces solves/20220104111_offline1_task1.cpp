#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int min = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

int binarySearch(const vector<int>& arr, int t) {
    int l = 0, high = arr.size() - 1;
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

    selectionSort(v);
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
        cout << t<< " not found in the vector" << endl;
    }

    return 0;
}
