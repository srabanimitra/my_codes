#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll n,r;
        cin >> n >> r;

       if(n%2==0){
        n=n+1;
       }
if(r%2==0){
        r=r-1;
       }

       int num=((r-n)/2)+1;

cout<<num/2 <<endl;

    }


}

