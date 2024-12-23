#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        f -= 1;

        int favorite_value = a[f];


        sort(a.begin(), a.end(), greater<int>());


        int low = -1, high = -1;
        for (int i = 0; i < n; ++i) {
            if (a[i] == favorite_value) {
                if (low == -1) low = i;
                high = i;
            }
        }
        if (low < k && high >= k) {
            cout << "MAYBE" << endl;
        } else if (low < k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
