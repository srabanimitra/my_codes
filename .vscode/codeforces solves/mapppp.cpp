#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b) {
    return a.second > b.second; // Sort in descending order of counts
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i) {
            int id;
            cin >> id;
            freq[id]++;
        }

        vector<pair<int, int>> sorted_freq(freq.begin(), freq.end());
        sort(sorted_freq.begin(), sorted_freq.end(), compare);

        vector<int> result;
        for (auto& p : sorted_freq) {
            int id = p.first;
            int count = p.second;
            for (int i = 0; i < count; ++i) {
                result.push_back(id);
            }
        }

        // Print the result
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i];
            if (i < result.size() - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
