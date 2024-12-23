#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
     //map<ll,bool>mp(n,true);
        vector<bool> b(n , false);

        b[a[0]] = true;

        bool flag = true;

        for (int i = 1; i < n; i++) {
            int s= a[i];
            if (b[s- 1] == true || b[s+ 1] == true) {
                b[s] = true;
            } else {
                flag = false;
                break;
            }
        }

        if (flag) cout << "YES" << endl;
         else cout << "NO" << endl;

    }


}
