#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define int long long
using namespace std;

void solve()
{
	int n, ans = 0, sum = 0, mx = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i){
		int x;
		cin >> x;
		sum += x;
		mx = max(mx, x);
		if (sum == 2 * mx) ++ans;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T = 1;
	cin >> T;
	while (T--) solve();
	return 0;
}
