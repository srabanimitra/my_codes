#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
       ll int a,b,c;
        cin>>a >>b >>c;
        if(a<c)
            cout<<"1"<<" ";
        else
            cout<<"-1"<<" ";

        if(a*b>c)
            cout<<b<<" ";
        else
            cout<<"-1"<<" ";

cout<<"\n";

    }
}
