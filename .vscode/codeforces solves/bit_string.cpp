#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int main()
{
int n;
cin>>n;
int bit=1;
for(int i=0;i<n;i++)
{
    bit=(bit*2)%mod;
}
cout<<bit<<endl;
}
