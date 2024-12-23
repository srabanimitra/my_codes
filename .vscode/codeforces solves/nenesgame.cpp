#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int k,q;
    cin>>k >>q;
    vector<int>v1(k),v2(q);
    for(auto &i:v1){
            cin>>i;

    }
    for(auto &i:v2){
            cin>>i;
            if(i>=v1[0]){cout<<v1[0]-1<<" ";}
    else{cout<<i<<" ";}
    }
    cout<<"\n";
}

}
