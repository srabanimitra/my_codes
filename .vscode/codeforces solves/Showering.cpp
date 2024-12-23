#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;

        vector<pair<int, int>> vec(n);

        for (int i = 0; i < n; i++) {
            cin >> vec[i].first >> vec[i].second;
        }


        sort(vec.begin(), vec.end());

        bool sum = false;


        if (vec[0].first >= s) {
            sum = true;
        }


        for (int i = 1; i < n && !sum; i++) {
            if (vec[i].first - vec[i-1].second >= s) {
                sum = true;
            }
        }


        if (m - vec[n-1].second >= s) {
            sum = true;
        }

        if (sum==true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }


}
