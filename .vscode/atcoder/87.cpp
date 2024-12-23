#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,d;
        cin>>a>>b;
       if(a==1 || b==1)
        cout<<max(a,b)<<endl;
       else if(a%2==0 && b%2==0)
        cout<<"0"<<endl;
        else
            d=(a+b)/2;
        cout<<d<<endl;
    }

}
