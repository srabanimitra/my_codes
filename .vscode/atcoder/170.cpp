
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,a[100],k;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        cin>>n;
        int count=0;
     for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
         int x,y,z;
        for(int j=i+1;j<n;j++)
        {
            int res=0;
            if(i<j)
            {
                x=a[i]^a[j];
                y=a[i]|a[j];
                z=a[i]&a[j];
                res=res+x+y+z;
                   if(res%4==0)
        {
            count++;
        }
            }


        }


    }
    cout<<count<<endl;
}
}
