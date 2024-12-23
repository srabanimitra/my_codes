#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int l=s.length();
   for(int i=0;i<l;i++)
   {
     if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B')
     {
        i=i+2;
       cout<<" ";
   }
     else{
        cout<<s[i];
     }
   }

}
