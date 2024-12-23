#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;

    while(t--){
string s;
cin>>s;
int sum=0;
int a=s[0]-'0';
int b=s[1]-'0';
int c=s[2]-'0';
int d=s[3]-'0';

if(a==0)a=10;
if(b==0)b=10;
if(c==0)c=10;
if(d==0)d=10;
sum=sum+abs(1-a);
sum=sum+abs(a-b);
sum=sum+abs(b-c);
sum=sum+abs(d-c);

        cout<<sum+4<<endl;

    }
}

