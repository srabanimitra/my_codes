#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    int a[n];
    int sum=0,s1=0,flag=1;
   for(int i=0;i<n;i++){
    cin>>a[i];
    sum=sum+a[i];
   }
   int d=sum/n;
    for(int i=0;i<n;i++){

    s1=s1+(a[i]-d);
    if(s1<0)
    {
        flag=0;
        break;
    }
   }
   if(flag==1)
    cout<<"yes"<<endl;
     else
       // if(a[0]<=d)
    cout<<"no"<<endl;
   // else
     //   cout<<"yes"<<endl;

}
}

