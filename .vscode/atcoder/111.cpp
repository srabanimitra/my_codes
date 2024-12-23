
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        int a[n];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }

        if(sum%2==0)
        {
            if((sum-n==0)||((sum-n)%2==0))
                cout<<"YES"<<"\n";
            //else
               // cout<<"NO"<<"\n";


       }
       else
        cout<<"NO"<<"\n";

    }
}
