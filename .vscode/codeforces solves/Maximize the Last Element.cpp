#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define int long long
using namespace std;

void solve()
{
    int n, a = 0;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        if (i % 2 == 0) {
            a = max(a, b);
        }
    }

    cout << a << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}
