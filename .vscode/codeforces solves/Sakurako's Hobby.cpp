#include <iostream>
#include <vector>
#include <string>
#define ll long long int
using namespace std;

void solve() {
   ll n;
    cin >> n;

    vector<int> p(n);
    vector<int> v(n, 0);
    vector<int> ans(n, 0);
    string s;

    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        p[i]--;
    }

    cin >> s;

    for (int i = 0; i < n; ++i) {
        if (!v[i]) {
            vector<int> cycle;
            int current = i;

            while (!v[current]) {
                v[current] = 1;
                cycle.push_back(current);
                current = p[current];
            }

            int blk = 0;
            for (int idx : cycle) {
                if (s[idx] == '0') {
                    blk++;
                }
            }

            for (int idx : cycle) {
                ans[idx] = blk;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
