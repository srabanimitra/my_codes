#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using ll=long long;
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        int flag=0;
        for(int i=0;i<n;i++){
            if(a[i]!=c[i] && b[i]!=c[i] )
            {

             flag=1;
            }
        }
    if(flag==1)
        cout<<"YES"<<"\n";
else

         cout<<"NO"<<"\n";
    }

    return 0;}

