
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int x,a=0;
        cin>>x;
        int d=x;
        while(x!=0)
        {
            x=x/10;
            a++;
        }

        if(a==1)
        {
            cout<<((d%10-1)*10+1)<<endl;
        }
        else if(a==2)
        {
            cout<<(((d%10)-1)*10)+3<<endl;
        }
        else  if(a==3)
        {
            cout<<(((d%10)-1)*10)+6<<endl;
        }
        else
        {
            cout<<(d%10)*10<<endl;
        }
    }
}
