
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int blue=0,red=0;
        for(int i=0; i<n; i++)
        {
            if(i<=n/2)
                blue=blue+a[i];
            else
                red=red+a[i];
        }

        if(blue%2==0 && red%2==0 || blue%2!=0 && red%2!=0 )
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
}
