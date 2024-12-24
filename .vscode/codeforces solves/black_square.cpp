
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int a1,a2,a3,a4;
cin>>a1 >>a2 >>a3 >>a4;
string s;
cin>>s;
int sum=0;
for(int i=0;i<s.length();i++)
{
    if(s[i]=='1'){
        sum=sum+a1;
    }
     if(s[i]=='2'){
        sum=sum+a2;
    }
     if(s[i]=='3'){
        sum=sum+a3;
    }
     if(s[i]=='4'){
        sum=sum+a4;
    }
}
cout<<sum<<endl;

}
