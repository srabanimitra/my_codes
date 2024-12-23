#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;
        vector<vector<int>>s(n+1,vector<int>(26, 0));


            for (int i = 0; i <n; ++i) {
                    s[i+1]=s[i];
                s[i+1][a[i] - 'a']++;

                 s[i+1][b[i] - 'a']--;
            }

        while (q--) {
            ll l, r;
            cin >> l >> r;
            l--;




            int count = 0;
            for (int i = 0; i < 26; ++i) {


                count += max(0,s[r][i]-s[l][i]);
            }

            cout << count << endl;
        }
    }
    return 0;
}
