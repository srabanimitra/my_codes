#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,sum=0;
    cin>>k >>n >>w;
    for(int i=1; i<=w; i++)
    {
        sum=sum+i*k;
    }
    int d=sum-n;
    if(d>=0)
    cout<<d<<endl;
    if(d<0)
    cout<<0<<endl;
}
