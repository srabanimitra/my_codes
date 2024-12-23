#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int t;
    cin>>t;
    while(t--){
    ll n,x,sum=0,mx=0,count=0;
        cin>>n;

        for(int i=1;i<=n;i++){
         ll x;
            cin>>x;
            sum += x;
            mx=max(mx,x);
            if(sum==2*mx){
                count++;
            }
        }
        cout<<count<<"\n";
    }
}
