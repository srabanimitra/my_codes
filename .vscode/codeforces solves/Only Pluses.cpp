
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int t;
    cin>>t;
    while(t--){
   int n,m,k,sum=1;
    cin>>n >>m >>k;
      int a[3]={n,m,k};
int x=5;
for(int i=0;i<x;i++){
    sort(a,a+3);
    a[0]++;
}
sum=a[0]*a[1]*a[2];
       cout<<sum <<"\n";
    }
}

