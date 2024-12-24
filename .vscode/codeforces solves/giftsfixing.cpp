#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n],b[n],min2=INT_MAX,min1=INT_MAX;

        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            min1=min(min1,a[i]);
        }

        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            min2=min(min2,b[i]);
        }
        ll ans=0;
        for(int i=0; i<n; i++)
        {
            ans +=max((a[i]-min1),(b[i]-min2));
        }
cout<<ans<<endl;
    }
}
