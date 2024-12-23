
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
     if(sum%4==0)
        cout<<(sum/4)<<endl;
     if(sum%4!=0)
        cout<<((sum/4)+1)<<endl;

}
