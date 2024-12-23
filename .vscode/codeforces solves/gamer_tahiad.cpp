#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n,k,count=0;
    cin>>n >>k;
int v[n];
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]==k){
        count++;
}
    }


    if(count !=0)
        cout<<"yes"<<endl;
    else
                cout<<"no"<<endl;}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
