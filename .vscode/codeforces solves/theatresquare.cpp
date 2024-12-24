#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m,a;
    cin>>n>>m>>a;
    ll r1=((n+a-1)/a)*((m+a-1)/a);
    cout<<r1<<endl;
}
