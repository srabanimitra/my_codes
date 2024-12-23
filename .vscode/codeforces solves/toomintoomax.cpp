#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
while(t--){
   int n,sum=0;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
sort(a,a+n);
int l=n-1;
int i=0;
int k=i+1;
int j=l-1;
 sum=abs(a[i]-a[j])+abs(a[j]-a[k])+abs(a[k]-a[l])+abs(a[l]-a[i]);




        cout<<sum<<endl;
    }



}


