#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        ll n,k;
     //   ll k;
        cin >> n >> k;

        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end() ,greater<ll>());
//for (ll i = 0; i < n; ++i) {
  //          cout<< a[i] <<" ";
    //    }



        ll a1 = 0, a2 = 0;
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                a1 += a[i];
            } else {
                int x=abs(a[i]-a1);
               if(x>=k){
                a1 -= (a[i]+k);
                k=0;
               }
               else{
                a1 -= (a[i]+x);
                k=k-x;

               }

                           }
        }

        cout <<a1 << endl;
    }

    return 0;
}

/*
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        ll k;
        cin >> n >> k;

        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());


        for (int i = 0; i < n - 1 && k > 0; ++i) {
            ll diff = a[i+1] - a[i];
            ll increase = min(diff, k);
            a[i] += increase;
            k -= increase;
        }


        sort(a.begin(), a.end(), greater<ll>());

        ll a1 = 0, a2 = 0;


        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                a1 += a[i];
            } else {
                a2 += a[i];
            }
        }

        cout << a1 - a2 << endl;
    }

    return 0;
}
*/
