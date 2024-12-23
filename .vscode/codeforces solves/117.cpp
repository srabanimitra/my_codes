#include<bits/stdc.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    if(n<=28){
        cout<<char('a')<<char('a')<<char('a'-(n+3))<<endl;
    }
      if(n<=53){
        cout<<char('a')<<char('a'-(n-28))<<char('z')<<endl;
    }
}
}
