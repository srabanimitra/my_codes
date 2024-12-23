#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a,b,m=99999,d=4,sum=0;

    while(d--){
    cin>>a >>b;
     sum=abs(a)+abs(b);
     // cout<<sum<<endl;

    m=min(sum,m);

    }
  cout<<m*m<<endl;

}
}
