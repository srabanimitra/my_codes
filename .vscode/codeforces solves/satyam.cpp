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

        ll x2 = (x1 + k - 1) / k;  // Number of moves needed on x-axis
        ll y2 = (y1 + k - 1) / k;  // Number of moves needed on y-axis

        ll total_moves = 2 * max(x2, y2);

        // Adjust if there's an odd number of moves needed on one axis
        if (x2 != y2) {
            if ((x2 - y2) % 2 != 0) {
                total_moves += 1;
            }
        }

        cout << total_moves << endl;
    }
    return 0;
}
