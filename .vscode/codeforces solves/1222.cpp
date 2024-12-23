#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int t;
cin>>t;
while(t--){
 int d;
cin>>d;
int a[d];
for(int i=0;i<d;i++){
    cin>>a[i];
}
 for(int i=0;i<d;i++){
        int mul=1;
    for(int j=1;j<a[i];j++){
        mul=mul*j;
    }
 cout<<mul<<endl;
 }
}

}


