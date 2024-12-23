#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve() {
   ll n, m;
    cin >> n >> m;
   ll a[n][m];
   ll mx=0;
  //  vector<int> p;

    for (int i = 0; i < n; ++i) {

         for (int j= 0; j < m; ++j) {
        cin >> a[i][j];
    }
    }
    int up=0,down=0,right=0,left=0;
   for (int i = 0; i < n; ++i) {

         for (int j= 0; j < m; ++j) {

                if(i>0)
                up=a[i-1][j];
         else up=0;

         if(i<n-1)
                down=a[i+1][j];
         else down=0;

         if(j>0)
                left=a[i][j-1];
         else left=0;

         if(j<m-1)
                right=a[i][j+1];
         else right=0;

         int mx=max(max(up,down),max(left,right));
         if(a[i][j] >mx){
            a[i][j]=mx;
         }


    }



    }
 for (int i = 0; i < n; ++i) {

         for (int j= 0; j < m; ++j) {
       cout<< a[i][j]<<" ";
    }
    cout << endl;
    }



//    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
