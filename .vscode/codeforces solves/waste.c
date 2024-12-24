

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int sum=0,d;
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
    for(int i=0;i<n;i++)
  {
      sum=sum+a[i];
  }
  d=sum-24;
  cout<<d<<endl;


}
