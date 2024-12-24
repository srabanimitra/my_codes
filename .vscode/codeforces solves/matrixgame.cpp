#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
int n;
cin>>n;
while(n--){
  int a,b,sum=0;
  cin>>a >>b;
int s[a][b];
int r[a]={0},c[b]={0};
for(int i=0;i<a;i++){
  for(int j=0;j<b;j++){
   cin>>s[i][j];
   if(s[i][j]==1){
    r[i]=1;
    c[j]=1;
   }
}
}
for(int i=0;i<a;i++){
  for(int j=0;j<b;j++){

   if(r[i]==0 && c[j]==0){
    s[i][j]==1;
    r[i]=1;
    c[j]=1;
   sum++;
   }
}
}
if(sum%2==0)
    cout<<"Vivek"<<"\n";
else
   cout<<"Ashish"<<"\n";
}
}
