#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;

    while (t--) {
       ll n;
        cin >> n;

        ll result_sum = 0;
        for (ll i = 1; i <= n; ++i) {
           ll num = i;
            while (num > 0) {
                result_sum += num % 10;
                num /= 10;
            }
        }

    cout << result_sum << endl;
    }

    return 0;
}
