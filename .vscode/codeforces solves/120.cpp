#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    int n1=2*n;
    int a[n1];
    int sum=0;
   for(int i=0;i<n1;i++){
    cin>>a[i];

   }
   sort(a,a+n1);
   for(int i=0;i<n1;i=i+2){
    sum=sum+min(a[i],a[i+1]);

   }
   //int d=sum/2;

    cout<<sum<<endl;

}
}


