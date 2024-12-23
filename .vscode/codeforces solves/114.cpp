#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll t;
cin>>t;
while(t--){
    ll n,n2,m=1;
    cin>>n >>n2;
    ll b;
    ll n3 =n2-1;
    for(ll i=0;i<n;i++){
        cin>>b;
        m=m*b;
    }
    if(2023 % m ==0 ){
      cout<<"yes"<<endl;
      cout<<2023/m<<endl;

      while(n3--){
        cout<<"1"<<endl;
    }
    }

        else{
        cout<<"NO"<<endl;
       }
}
}
