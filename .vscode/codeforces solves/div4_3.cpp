#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,m;
        cin >> n >>m;
        vector<ll> arr(n);
        for (ll i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        cout <<countGoodPrefixes(n,arr) << endl;
    }
    return 0;
}
