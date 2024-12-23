#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int t;
cin>>t;
while(t--){
    ll n;cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<n-2;i++){

  if(s[i]=='m'&&s[i+1]=='a'&& s[i]=='p'){
    count++;
  }

    else if(s[i]=='p'&&s[i+1]=='i'&&s[i]=='e'){
        count++;
    }
    i +=2;
   // cout<<s[i]<<endl;
     //  cout<<s[i+1]<<endl;
    //       cout<<s[i+2]<<endl;


          //  count++;
    }
    cout<<count<<endl;
}
}
