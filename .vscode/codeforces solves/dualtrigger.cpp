#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int t;
cin>>t;
while(t--){
   int n;
    cin>>n;
    string s;
    cin>>s;
   vector<int>o;
    for(int i=0;i<n;i++){
        if(s[i]=='1')
            o.push_back(i);
    }
    int d=o.size();
    if((d%2!=0) ||(d==2 && o[0]==o[1]-1 ))
        cout << "NO\n";

else
    cout << "YES\n";

}

}
