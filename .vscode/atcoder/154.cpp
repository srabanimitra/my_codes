
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,x,max=0;
        cin>>n;
        for(int j=1; j<=n; j++)
        {
           int a,b;
           cin>>a >>b;
            if(a<=10){

             if(b>max)
             {
                 max=b;
                 x=j;
             }
            }
        }
        cout<<x<<endl;

    }
    }
