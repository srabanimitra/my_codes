#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n >>m>>k;
        int b[n],c[m];
        int c1=0,c2=0;
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            if(b[i]<k)
                c1++;
        }
        for(int i=0; i<m; i++)
        {
            cin>>c[i];
            if(c[i]<k)
                c2++;
        }
        cout<<c1*c2<<endl;
    }
}
