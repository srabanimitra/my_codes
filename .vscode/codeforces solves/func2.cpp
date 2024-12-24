#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int sum=0;
    while(n)
    {

        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
int main()
{
  int a,b;
  cin>>a>>b;

  cout <<sum(a)+sum(b);
}
