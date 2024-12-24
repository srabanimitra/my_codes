
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
      int a,b,c;
      cin>>a >>b >>c;
      if((a+b)==c)
       cout<<"+"<<endl;
     else if((a-b)==c)
       cout<<"-"<<endl;

    }



}
