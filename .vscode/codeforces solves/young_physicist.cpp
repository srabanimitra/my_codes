#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n;
    cin>>n;
    int a,b,c;
    int sum1=0,sum2=0,sum3=0,sum=0;
    int flag=1;
    for(int i=0;i<n;i++){

cin>>a >>b >>c;
sum1 += a;
sum2 += a;
sum3 += a;

    }
    sum=sum1+sum2+sum3;
    if(sum==0)
             cout<<"YES"<<"\n";
    else
             cout<<"NO"<<"\n";

}





