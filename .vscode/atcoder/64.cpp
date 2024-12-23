
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    if(n==1)
        cout<<"0"<<"\n";
         if(n==2)
        cout<<m<<"\n";
         if(n>2)
        cout<<2*m<<"\n";
    }
}


