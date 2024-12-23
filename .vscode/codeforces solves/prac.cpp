#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
       string s;
       cin>>s;
       sort(s.begin(),s.end());
       ll f=0,l=n-1;
       while(f<l){
        cout<<s[f]<<s[l];
        f++;
        l--;
       }


       if(f==l){
        cout << s[f] ;
       }
cout<< endl;

    }


}
