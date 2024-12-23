#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,a,b,k,ans=0;
        cin>>n>>a>>b>>k;
        while(n!=1)
        {
            if(n%a==0 and n%b==0)
                ans=ans+0;
            else if(n%a==0 and n%b!=0)
               ans=ans+1;
            else if(n%a!=0 and n%b==0)
                ans=ans+1;
                if(ans==k)
                   break;
            n--;
        }
        if(ans>=k)
            cout<<"Win"<<endl;
        else
          cout<<"Lose"<<endl;
    }


}
