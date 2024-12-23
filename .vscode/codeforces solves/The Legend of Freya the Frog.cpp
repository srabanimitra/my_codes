#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll x, y, k;
        cin >> x >> y >> k;

        ll x1 = abs(x);
       ll y1 = abs(y);


        ll x2 = (x1 + k - 1) / k;
        ll y2 = (y1 + k - 1) / k;


        ll total_moves = 0;
        ll x3 = 0, y3 = 0;

        while (x2 > 0 || y2 > 0) {
            if (total_moves % 2 == 0) {
                if (x2 > 0) {
                    x3 += min(k, x1 - x3);
                    x2--;
                }
            } else {
                if (y2 > 0) {
                    y3 += min(k, y1 - y3);
                    y2--;
                }
            }
            total_moves++;
        }

        cout << total_moves << endl;
    }
    return 0;
}
