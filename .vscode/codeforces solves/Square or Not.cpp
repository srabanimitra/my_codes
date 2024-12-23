#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool check(string s, int k) {

    for (int i = 0; i < k; i++) {
        if (s[i] != '1' || s[s.size() - 1 - i] != '1') {
            return false;
        }
    }


    for (int i = 1; i < k - 1; i++) {
        if (s[i * k] != '1' || s[(i + 1) * k - 1] != '1') {
            return false;
        }

        for (int j = 1; j < k - 1; j++) {
            if (s[i * k + j] != '0') {
                return false;
            }
        }
    }

    return true;
}

void solve() {
   ll n;
    string s;
    cin >> n >> s;

    ll k = sqrt(n);
    if (k * k != n) {
        cout << "No" << endl;
        return;
    }

    if (check(s, k)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
