
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int t;
cin>>t;
while(t--){
   string s;
   cin>>s;
   int h=stoi(s.substr(0,2));
    int m=stoi(s.substr(3,2));
    string p;
    if(h>=12)
        p="PM";
    else
        p="AM";
    if(h==0){
        h=12;
    }
    else if(h>12){
        h=h-12;
    }
    cout<<(h<10?"0":"")+to_string(h)+":"+(m<10 ? "0":"")+to_string(m)+" "+ p<<endl;
}

}

