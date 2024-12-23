#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int mx=0;
    vector<int> p;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        mx=max(mx,a[i]);
    }

    for (int i = 0; i < m; ++i) {
        char c;
        int l, r;
        cin >> c >> l >> r;


                if (l <=mx  && mx <= r) {
                    if(c=='+')
                        mx++;
                    else
                        mx--;

        }
          cout << mx << " ";

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
