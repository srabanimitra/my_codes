#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        double r=ceil(y/2.0);
        double rem_s=(15*r)-(4*y);
        if(rem_s-x>=0)
        {
            cout<<r<<endl;
        }
        else
        {
            double t=ceil((abs(rem_s-x))/15.0);

            cout<<r+t<<endl;
        }
    }
}
