#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,median=0,j=0,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(n%2==0){
            j=n/2-1;
        median=a[j]+1;
    }
    else{
        j=n/2;
        median=a[j]+1;
    }
//cout<<median<<endl;
for(int i=j+1;i<n;i++ ){
    if(a[i]<median){
        count++;
    }
}
cout<<count+1<<endl;
    }
}

