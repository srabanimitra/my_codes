#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        string s;
        cin >> s;

        // Compute prefix sums
        vector<ll> prefix_sum(n + 1, 0);
        for (int i = 1; i <= n; ++i) {
            prefix_sum[i] = prefix_sum[i - 1] + a[i - 1];
        }

        ll max_score = 0;
        vector<bool> used(n, false);

        // Iterate through to find valid L...R segments
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'L' && !used[i]) {
                for (int j = i + 1; j < n; ++j) {
                    if (s[j] == 'R' && !used[j]) {
                        // Calculate score for this segment
                        ll segment_sum = prefix_sum[j + 1] - prefix_sum[i];
                        max_score += segment_sum;
                        // Mark the segment as used
                        for (int k = i; k <= j; ++k) {
                            used[k] = true;
                        }
                        break; // Move to the next 'L'
                    }
                }
            }
        }

        cout << max_score << '\n';
    }

    return 0;
}
