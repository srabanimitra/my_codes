#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    if(n%2!=0)
    {
        for(int i=1;i<=n;i++)
        {

         if(i%2!=0)
         {
             for(int j=1;j<=m;j++)
                cout<<"#";
                count++;
         }
         else if(i%2==0)
         {
           if(count%2!=0)
            {
        for(int j=1;j<=m;j++)
        {
            if(j!=m)
                cout<<".";
            else
                cout<<"#";
        }
           }
        else
            {
        for(int j=m;j>0;j--)
        {
            if(j==m)
                cout<<"#";
            else
                cout<<".";
        }
           }
         }

         cout<<endl;

        }
    }

}

