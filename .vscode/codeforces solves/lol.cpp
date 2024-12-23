#include<bits/stdc++.h>
using namespace std;

void check()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int l1=0,o1=0,l2=0,o2=0;
   for(int i=0;i<n;i++)
   {
       if(s[i]=='L')
        l1++;
       else
        o1++;
   }
   for(int i=0;i<n-1;i++)
   {
       if(s[i]=='L')
        l2++;
       else
        o2++;
       if(l2!=l1-l2 && o2!=o1-o2)
       {
           cout<<i+1<<endl;
           return;

       }
   }
   cout<<-1<<endl;
}
int main()
{
    int t=1;
    while(t--)
        check();
}
