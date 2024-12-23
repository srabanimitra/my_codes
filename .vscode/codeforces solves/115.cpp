
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll t;
cin>>t;
while(t--){
    int a,b;
    cin>>a >>b;
    int d=a*b;
    int x=d;
    int x1=d;
    while(x%a==0 && x1%b==0
          ){
       if ((x/a !=a && x/a !=b) || (x1/b !=a && x1/b !=b)){
        d=d*(x/a)*(x1/b);
       }
       x=x/a;
      x1= x1/b;
    }
     /*   while(x1%b==0){
       if (x1/b !=a && x1/b !=b){
        d=d*(x1/a);
       }
       x1=x1/b;
    }*/
    cout<<d<<endl;
}}
