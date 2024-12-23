#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int n,m;

cin>>n >>m;
 int   p=0,s=0,prime=0;
while(n!=m){
    n++;

    for(int i=2;i<n;i++)
    {
        p=0;
        if(n%i!=0){
            p=1;
        }
        else{
             p=0;
            break;
        }
    }
    if(p==1){
       if(n==m){
        prime=1;
       }
       else{
        s++;
       }
    }
}

if(prime==1 && s==0)
{
    cout<<"YES"<<endl;
}

    else
      cout<<"NO"<<endl;

}

