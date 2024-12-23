#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int a[14]={4,7,47,44,77,74,444,777,447,477,774,777,747,744};
   ll n;
    cin>>n;
    int flag=1;
    for(int i=0;i<14;i++){

        if(n%a[i]==0){
            flag=1;
            break;
        }

        else{
            flag=0;
        }

    }
    if(flag==1)
             cout<<"YES"<<"\n";
    else
             cout<<"NO"<<"\n";

}




