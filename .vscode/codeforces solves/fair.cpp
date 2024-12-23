#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int t;
cin>>t;
while(t--){
   ll n,o=0,t=0;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)
            o++;
        else
            t++;
    }
    if((o%2==0 && t%2==0)||((t%2==1 )&& ((o-2)%2==0)&&(o!=0)))
             cout<<"YES"<<"\n";
    else
             cout<<"NO"<<"\n";

}

}
