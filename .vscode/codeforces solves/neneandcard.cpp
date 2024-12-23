#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int k,ans=0;
    cin>>k ;
    vector<int>v1(k);
    map<int,int>m;
    for(auto &i:v1){
            cin>>i;
            m[i]++;
            if(m[i]==2){
                ans++;
            }

    }

    cout<<ans<<"\n";
}

}

