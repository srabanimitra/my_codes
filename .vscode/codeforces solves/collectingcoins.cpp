
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;

        cin>>a >>b >>c >>n;
        int maxt=max(a,max(b,c));
        s=a+b+c+n;
        if(s%3==0 && s/3>=maxt )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
