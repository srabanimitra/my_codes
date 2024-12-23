#include<bits/stdc++.h>
using namespace std;


int main() {
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<int>v(n);

    unordered_map<int,int>map;
    for(int i=0;i<n;i++){
        cin>>v[i];
        map[v[i]]++;

    }
    int n1=1,m=n;
    for(int i=1;i<=n;i++){
        if(v[i]>0 && v[i]<m){
            n1=v[i];
            m=v[i];        }

    }
    cout<<n1 <<" "<<m<<endl;
   }
}
