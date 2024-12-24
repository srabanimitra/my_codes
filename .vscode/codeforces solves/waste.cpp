#include<bits/stdc++.h>
using namespace std;
int main()
{
  int sum=0,d;
  int a[4];
  for(int i=0;i<4;i++)
  {
      cin>>a[i];
  }
    for(int i=0;i<4;i++)
  {
      sum=sum+a[i];
  }
  d=sum-24;
  cout<<d<<endl;


}
