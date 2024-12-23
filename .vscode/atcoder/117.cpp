#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
    int a[n],p[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
//    sort(a,a+n);

     for(int i=0;i<n-1;i++)
    {
        cin>>p[i];

    }
         for(int i=0;i<n;i++)
    {
        x=a[i]+p[i];

    }
    cout<<x;
   // sort(p,p+(n-1));
    //while(x<=n){
    //for(int i=0;i<n;i++)
    //{
//if(a[i]==x || p[i]==x)
   // count++;

   // }
    }


