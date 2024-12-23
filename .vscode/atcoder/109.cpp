#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
   vector<ll>app(n);
   vector<ll>apart(m);
    for(ll i=0;i<n;i++)
    {
        cin>>app[i];
    }

    for(ll i=0;i<m;i++)
    {
        cin>>apart[i];
    }
    sort(app.begin(),app.end());
    sort(apart.begin(),apart.end());
    ll count=0;
    for (ll i=0,j=0;i<n && j<m;) {
       if(abs(app[i]-apart[j])<=k || abs(app[i]+apart[j])<=k || app[i]==apart[j])
          { count++;
            i++;
            j++;
        } else if(app[i]<apart[j])
        {
            i++;
        } else
        {
            j++;
        }
    }
 cout<<count<<"\n";
  return 0;
}
