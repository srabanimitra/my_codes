
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin>>t;
    while(t--){
   ll n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum=sum+abs(a[i]);
    }


    cout<<sum<<endl;
    }
}
