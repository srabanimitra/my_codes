#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
ll t;
cin>>t;
while(t--){
  ll n,k;
  cin>>n >>k;
string s;
cin>>s;
ll b=0,a=0;
for(ll i=0;i<s.length();i++){
        if(s[i]=='A'){
            a++;
        }
    else{
        b++;
    }
}
if(b==k){
cout<< 0 <<endl;
}
else{
    if(b<k){
            ll count=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='A'){
                count++;
            }
            if(count== (k-b)){
                 cout<< 1 <<"\n"<< i+1 <<" "<<'B'<<endl;
               break;
            }
        }

    }
   else{
    ll count =0;
     for(ll i=0;i<n;i++){
            if(s[i]=='B'){
                count++;
            }
            if(count== abs(k-b)){
                 cout<< 1 <<"\n"<< i+1 <<" "<<'A'<<endl;
                 break;

            }
        }

    }

   }

}



}
