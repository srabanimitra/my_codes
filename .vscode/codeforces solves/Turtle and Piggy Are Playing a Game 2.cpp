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
      //  vector<int> a(n);
      int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
     sort(a,a+n);
        cout << a[n/2] << endl;
    }

    return 0;
}
