#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve() {
   ll n, m;
    cin >> n >> m;
if( n==0 && m==0){
     cout<<"YES"<<endl;
}
else if( n==0 &&  m%2==1){
     cout<<"NO"<<endl;
}
else if( m==0 &&  n%2==1){
     cout<<"NO"<<endl;
}
   else if( n%2==0 && m%2==0){
     cout<<"YES"<<endl;
}
      else if (n%2==0 && m%2 ==1){
        cout<<"YES"<<endl;
      }
    else  if(n%2!=0 && m%2 !=0){
        cout<<"NO"<<endl;
      }
      else
  cout<<"NO" << endl;

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
