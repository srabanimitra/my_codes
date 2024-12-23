
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int t;
cin>>t;
while(t--){
   int n,flag=1,flag1=1;
   cin>>n;
string s=to_string(n);
for(int i=0;i<s.size();i++){
    if((s[i] !='0')||s[i] !='1'){
       flag=0;
         break;
    }
}
string s1;
if(flag==1){
  cout<<"yes"<<"\n";
}

else{
        while(n!=0){
    if(n%10==0){
        n=n/10;
s1=s1+to_string(n%10);
flag1=1;
    }
   else if(n%11==0){
        n=n/11;
s1=s1+to_string(n%11);
flag1=1;
    }
    else{
        cout<<"no"<<endl;
        flag1=0;
        break;
    }
}
int flag2=1;
if(flag1==1){
   for(int i=0;i<s1.size();i++){
    if((s[i] !='0')||s[i] !='1')
        flag2=0;
    break;
}
}

if(flag2==1)
   cout<<"yes"<<"\n";
else
    cout<<"no"<<endl;
}

}
}

