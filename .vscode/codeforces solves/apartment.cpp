#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n >>m >>k;
    int a[n],b[m];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    int count=0;
    for(int i=0; i<n; i++)
    {
        int d=a[i]-5;
        int f=a[i]+5;
        for(int i=0; i<m; i++)
        {
            if(b[i]<=f && b[i]>=d )
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}
/////
