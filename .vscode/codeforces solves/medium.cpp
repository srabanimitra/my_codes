#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a,b,c;
        cin>>a >>b >>c;
        if((a>b && a<c) ||(a>c && a<b))
        {
            cout<<a<<endl;

        }
       else if((b>a && b<c) ||(b>c && b<a))
        {
            cout<<b<<endl;

        }
       else if((c>a && c<b) ||(c>b && c<a))
        {
            cout<<c<<endl;

        }
    }

}

