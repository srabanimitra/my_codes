#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
 ll  n,x;
    cin >> n >> x;
  int sum,sum1=0;
    for(int i=1;i<x;i++){
    for(int j=1;j<x;j++){
if(i+j>=x)break;

sum=min(x-i-j,(n-i*j)/(i+j));
if(sum<1)
break;
  sum1+=sum;

   }
    }
      /*
 for(int i=1;i<=n;i++){
    for(int j=1;j<=x-i;j++){
    ll c=x-i-j;


   for(int k=1;k<=x-i-j;k++){
    if(n>=(i*j+j*k+k*i) && i+j+k<=x)
        sum++;
 }*/


     cout<<sum1<<endl;
          }

  return 0;
}

