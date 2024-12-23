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

        int m;
        cin >> m;

        while (m--) {
            string s;
            cin >> s;

            if (s.length() != n) {
                cout << "NO" <<endl;
                continue;
            }

            map<ll, char> s1;
            map<char, ll> s2;
            bool flag = true;

            for (int i = 0; i < n; ++i) {
                ll num = a[i];
                char ch = s[i];

                if (s1.count(num) !=0 && s1[num] != ch) {
                    flag = false;
                    break;
                }

                if (s2.count(ch) && s2[ch] != num) {
                    flag = false;
                    break;
                }

                s1[num] = ch;
                s2[ch] = num;
            }

            if (flag) {
                cout << "YES"<<endl;
            } else {
                cout << "NO"<<endl;
            }
        }
    }


}
