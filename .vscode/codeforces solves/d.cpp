#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
while(t--){
   ll n,sum=0,count=0,d=0,j=0;
    cin>>n;
  ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    sort(a, a + n, greater<int>());
    ll half=ceil(sum/2);
    while(d<half || d<(half-1)){
        count++;
        d=d+a[j];
        j++;
    }

    cout<<count<<endl;
}

}
