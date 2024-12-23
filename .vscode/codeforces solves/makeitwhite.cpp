#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
    int n1;
    cin>>n1;

   string s;
   cin>>s;
   int m=99999,n=0;

   for(int i=0;i<s.size();i++){
    if(s[i]=='B'){
    m=min(m,i);
    n=max(n,i);
    }

   }
   cout<<abs(n-m)+1<<endl;
    }
    }


