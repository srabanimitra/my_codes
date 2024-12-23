#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int a =0,b=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            a++;
        }
       else if(s[i]=='B'){
            b++;
        }
    }
    if(a>b)
           cout<<"A"<<endl;
        else
           cout<<"B"<<endl;
}

}
