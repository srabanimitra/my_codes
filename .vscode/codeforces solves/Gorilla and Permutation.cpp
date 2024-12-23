#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int t;
    cin>>t;
    while(t--){
    ll n,m,k,sum=0;
        cin>>n >> m >> k;
int a[n],x=n,x1=1;
 for(int i=n;i>=k;i--){
              a[i]=x;
                x--;
        }
     //   cout<<x<<endl;
        for(int i=m;i>=1;i--){
                 a[i]=x1;
                x1++;
        }
//cout<<x1<<endl;

            for(int i=x;i>=x1;i--){
                 a[i]=i;

        }
         for(int i=n;i>=1;i--){
                cout<<a[i]<<" ";
        }

       cout<<"\n";
    }
}

