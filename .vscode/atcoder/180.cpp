#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=0,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0],x,min=a[1],y;
    for(int i=0;i<n;i++)
    {
        if(max<=a[i])
        {
            max=a[i];
            x=i;

        }
        if(min>=a[i])
        {
            min=a[i];
            y=i;

        }
    }
cout<<x<<endl<<y<<endl;
}
