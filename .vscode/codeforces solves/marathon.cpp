
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,s,c,d;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        s=0;
      cin>>a >>b >>c >>d;
      if(a<b){
        s++;

      }
      if(a<c){
        s++;
      }
      if(a<d){
        s++;

      }
cout<<s<<endl;
    }



}
