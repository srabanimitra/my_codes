

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,a[1000],count=0;
 cin>>n;
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
 for(int i=0;i<n;i++)
 {
     for(int j=i+1;j<n;j++)
     {
         if(a[i]==a[j])
         {
             for(int k=j;k<n;k++)
             {
                 a[k]=a[k+1];

             }

             n--;
              j--;

         }

     }
     count++;
 }
 cout<<count;
 cout<<endl;
for(int i=n-1;i>=0;i--)
 {
     cout<<a[i]<<" ";

 }

}
