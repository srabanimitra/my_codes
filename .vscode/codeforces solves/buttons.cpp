#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
    int a,b,c;
    cin>>a >>b >>c;
    int d=a+b+c;
    if(a==0)
        cout<<"Second"<<"\n";
    else if(b==0)
         cout<<"First"<<"\n";
   else if(d%2==0)
        cout<<"Second"<<"\n";
    else
       cout<<"First"<<"\n";

   }
}
