#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1 >>y1;
        cin >>x2 >>y2;
         cin>>x3 >>y3;
         cin >>x4 >>y4;
        int s=abs(x1-x2);
        int s1=abs(y1-y2);
        if(s==0)
            cout<<s1*s1<<endl;
        else if(s1==0)
            cout<<s*s<<endl;
        else
            cout<<s*s1<<endl;

    }

}

