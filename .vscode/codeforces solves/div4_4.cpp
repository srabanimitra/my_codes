#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
#define ll long long int
void findCircleCenter(const vector<string>& grid, ll n, ll m, ll& centerX, ll& centerY) {
    ll minRow = INT_MAX, maxRow = INT_MIN;
  ll  minCol = INT_MAX, maxCol = INT_MIN;

    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < m; ++j) {
            if (grid[i][j] == '#') {
                if (i < minRow) minRow = i;
                if (i > maxRow) maxRow = i;
                if (j < minCol) minCol = j;
                if (j > maxCol) maxCol = j;
            }
        }
    }

    centerX = (minRow + maxRow) / 2 + 1;
    centerY = (minCol + maxCol) / 2 + 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
      ll n, m;
        cin >> n >> m;

        vector<string> grid(n);
        for (ll i = 0; i < n; ++i) {
            cin >> grid[i];
        }

     ll centerX, centerY;
        findCircleCenter(grid, n, m, centerX, centerY);
        cout << centerX << " " << centerY << endl;
    }

    return 0;
}
