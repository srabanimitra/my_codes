#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int sum=0;
       int x1=2;
        for(int x=2;x<=n;x++){
int k=n/x;
int sum1=x*k*(k+1)/2;
if(sum1>sum){
    sum=sum1;
    x1=x;
}
        }

        cout<<x1<<endl;
    }

}
