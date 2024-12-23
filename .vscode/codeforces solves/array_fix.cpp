#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sorted(){
     int n;
        cin>>n;
    int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
            }
            vector<int>v;
            v.push_back(a[n-1]);

 for(int i=n-2;i>=0;i--){
    if(a[i]>v.back()){
      v.push_back(a[i]%10);
        v.push_back(a[i]/10);
        }
       else{
        v.push_back(a[i]);
       }
    }
 cout<<(is_sorted(v.rbegin(),v.rend())?"YES":"NO")<<endl;

 }

int main(){
	int t;
	cin>>t;
	while(t--){

        sorted();
     //   cout<<(sorted(a)? "YES" : "NO")<<endl;
}
return 0;
}
