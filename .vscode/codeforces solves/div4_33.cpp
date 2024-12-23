#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countGoodPrefixes(const vector<int>& arr) {
    int n = arr.size();
    long long cumulativeSum = 0;
    unordered_map<long long, int> prefixSumCount;
    int goodPrefixCount = 0;

    for (int i = 0; i < n; ++i) {
        cumulativeSum += arr[i];

        // Check if this element is twice some prefix sum
        if (cumulativeSum == 2 * arr[i]) {
            ++goodPrefixCount;
        }

        // Check if the cumulative sum is twice any of the previous elements
        if (prefixSumCount.find(cumulativeSum - 2 * arr[i]) != prefixSumCount.end()) {
            ++goodPrefixCount;
        }

        // Update the prefix sum count
        prefixSumCount[cumulativeSum]++;
    }

    return goodPrefixCount;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        cout << countGoodPrefixes(arr) << endl;
    }
    return 0;
}

