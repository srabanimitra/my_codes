#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,passanger=0,mx=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        passanger=passanger-a;
        passanger=passanger+b;
        mx=max(mx,passanger);
    }
     cout<<mx<<endl;
     return 0;
    }
