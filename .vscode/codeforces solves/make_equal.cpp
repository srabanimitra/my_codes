#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
            cin>>a[i];
		int s=1,p=1;
		while(a[s-1]==a[s] )
            s++;

		while(a[n-p-1]==a[n-p])
		p++;
		if(a[0]==a[n-1])
		cout<<max(0,n-s-p)<<endl;
		else
		cout<<n-max(s,p)<<endl;
	}
}
