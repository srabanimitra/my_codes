#include<bits/stdc++.h>
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
        string a;
        cin >> a;

        ll count1 = 0, count0 = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == '1') {
                count1++;
            }
        }

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == '0' && a[i + 1] == '1') {
                count0++;
            }
        }

        if (count1 > count0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
