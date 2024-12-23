#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define int long long
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
    ll n,x,sum=0,mx=0,count=0;
        cin>>n;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum += x;
            mx=max(mx,x);
            if(sum==2*x){
                count++;
            }
        }
        cout<<count<<"\n";
    }
}
