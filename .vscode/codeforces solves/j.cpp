#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,count=0,b=0;
    cin>>k;
    int a[k];
    for(int i=1; i<=k; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            count++;
        if(a[i]%2!=0)
            b++;
    }

    for(int i=1; i<=k; i++)
    {
        if(count>b)
        {
         if(a[i]%2!=0)
            cout<<i<<endl;
        }
        if(count<b)
        {
        if(a[i]%2==0)
            cout<<i<<endl;
        }
    }



}
