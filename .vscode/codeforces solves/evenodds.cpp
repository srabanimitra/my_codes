#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);

    ll n,k,d;
    cin >> n >>k;
    if(n%2==0)
    {
        d=n/2;
    }
    else
    {
        d=n/2+1;
    }

    if(k<=d)
    {
        cout<<(2*k-1)<<endl;
    }

    else
    {

        cout<<(k-d)*2<<endl;
    }



}

