#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<char>s1(s.begin(),s.end());
        vector<char>s2(s1.begin(),s1.end());

         vector<char>s3(s2);
         reverse(s3.begin(),s3.end());

        map<char,char>mp;
        for(int i=0;i<s2.size();i++){
            mp[s2[i]]= s3[i];
        }
string s4;
for(char c:s){
    s4 += mp[c];
}
cout<<s4<<endl;
        }




    }



