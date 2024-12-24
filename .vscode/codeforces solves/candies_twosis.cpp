#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,a=0,b=0,count=0;
        cin>>n;
        for(int i=1;i<n;i++)
        {
            a=n-i,b=i;
            if(a>b)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
