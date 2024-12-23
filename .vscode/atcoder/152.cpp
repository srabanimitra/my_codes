#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int ans=n-1;
        for(int i=0; i<n-1; i++)
        {
            int count=0;
             for(int j=i+1; j<n && a[j]-a[j+1]<=k; j++){

                    count++;
             }
           ans =min(ans,n-count-1);
           i += count;
        }
        cout<<count<<endl;
    }
}
