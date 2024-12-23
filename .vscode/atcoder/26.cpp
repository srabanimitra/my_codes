#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin>>t;
while(t--)
{
   string s;
   cin>>s;
   int n=s.length();
   int o1=0,o2=0,m=0;
   for(int i=0;i<n;i++)
   {
       if(s[i]=='(')
       {
           o1++;

       }
      else if(s[i]==')')
       {
          if(o1>0)
          {
              m++;
              o1--;
          }
       }
       else if(s[i]=='[')
       {
           o2++;
       }
       else if(s[i]==']')
       {
          if(o2>0)
          {
              m++;
              o2--;
          }
       }
   }
   cout<< m <<endl;
}

}
