#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        int m;
        cin >> m;

        unordered_map<int, int> modifications;
        for (int i = 0; i < m; ++i) {
            int cj, dj;
            cin >> cj >> dj;
            modifications[cj] = dj;
        }

        // Simulate modification operations
        vector<int> result = a;
        for (auto it = modifications.begin(); it != modifications.end(); ++it) {
            int cj = it->first;
            int dj = it->second;
            if (cj <= n) {
                result[cj - 1] = dj;
            }
        }

        // Check if result matches array b
        bool possible = true;
        for (int i = 0; i < n; ++i) {
            if (result[i] != b[i]) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
