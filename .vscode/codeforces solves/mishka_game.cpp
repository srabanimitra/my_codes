#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,s=0,s1=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cin>>a >>b;
      if(a>b){
        s++;

      }
      if(a<b){
        s1++;
      }
      if(s==s1){
        s++;
        s1++;
      }

    }
    if(s>s1){
        cout<<"Mishka"<<endl;
    }
     if(s1>s){
        cout<<"Chris"<<endl;
    }
    if(s==s1){
        cout<<"Friendship is magic!^^"<<endl;
    }
}
