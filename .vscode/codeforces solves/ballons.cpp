
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,sum=0;
    cin>>n;
    map<char, int>m;
       string s;
       cin>>s;

        for(int i=0;i<n;i++){
      char f=s[i];
       if(m.find(f)==m.end()) {
            sum=sum+2;
        //cout<<"OK"<<endl;
       }
       else{
sum=sum+1;
      //  cout<<s<<m[s]<<endl;
       }
        m[f]++;
    }

cout<<sum<<endl;
    }
}
