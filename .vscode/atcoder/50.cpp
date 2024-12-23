#include<bits/stdc++.h>
using namespace std;
int main()
{
 string a,b;
 cin>>a>>b;
 int flag=0;
 for(int i=0;i<a.size();i++)
 {
     if(isupper(a[i]))
     {
      a[i]=tolower(a[i]);

     }

 }
 for(int i=0;i<b.size();i++)
 {
     if(isupper(b[i]))
     {
      b[i]=tolower(b[i]);

     }

 }
 for(int i=0;i<a.size();i++)
 {
     if(a[i]>b[i])
     {
  flag=1;
  break;
     }

 }
if(a==b)
cout<<"0"<<endl;
else if(flag==1)
cout<<"1"<<endl;
else
    cout<<"-1"<<endl;
}

