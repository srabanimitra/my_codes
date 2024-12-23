#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin>>t;
while(t--){
    int n,flag=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

   for(int i=0;i<n-1;i++)
    {
       if(a[i+1]-a[i]>1)
       {
           flag=0;
           break;
       }

    }
    if(flag==1)
        cout<<"YES"<<"\n";
         if(flag==0)
        cout<<"NO"<<"\n";

    }
}


