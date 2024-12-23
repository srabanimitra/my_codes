
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,temp;
  cin>>n;
  for(int i=0;i<n;i++)
  {
   int m,flag=0;
   cin>>m;

   int a[m];
    for(int j=0;j<m;j++)
   {
     cin>>a[j];
   }
   sort(a,a+m);
   for(int j=m-1;j>=0;j--)
   {
       int count=0;
     for(int k=0;k<m;k++)
     {
         if(a[j]==a[k])
            count++;

     }
     if(count>=3)
     {
         cout<<a[j]<<endl;
         flag=1;
         break;
     }
     else{
        flag=0;
     }

   }
   if(flag==0)
    cout<<-1<<endl;

  }
}
