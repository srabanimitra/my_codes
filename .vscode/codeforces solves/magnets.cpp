#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<n-1;i++)
     {
         if(a[i]!=a[i+1])
            b++;

     }
     cout<<b<<endl;
     return 0;
    }

