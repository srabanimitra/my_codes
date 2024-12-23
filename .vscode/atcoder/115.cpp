
#include<bits/stdc++.h>
using namespace std;
int main()
{
  double sum=0,d;
  int n;
  cin>>n;
  double a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
    for(int i=0;i<n;i++)
  {
      sum=sum+a[i];
  }
  d=sum/n;
  cout<<d<<endl;


}
