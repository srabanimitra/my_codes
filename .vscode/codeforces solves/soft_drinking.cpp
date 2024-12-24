#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int n,k,l,c,d,p,nl,np;
cin>>n >>k >>l >>c >>d >>p >>nl >>np;
int a=((k*l)/nl)/n;
int b=(c*d)/n;
int e=(p/np)/n;
int m=min(a,b);
int f=min(m,e);
cout<<f<<endl;

}
