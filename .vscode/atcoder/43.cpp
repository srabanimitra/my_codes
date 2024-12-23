
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    int b,c,h,ans=0;
    cin>>b >>c >>h;
   ans=c+h;
   if((b-1)>=ans)
    cout<<ans+ans+1<<endl;
    else
        cout<<(b-1)+(b-1)+1<<endl;

    }
}
