
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin>>t;
while(t--)
{
  ll int n;
  cin>>n;
 ll int a[n];
 set<ll int> s;
  for(ll int i=0;i<n;i++){
  cin>>a[i];
  s.insert(a[i]);


  }
if(s.size()==1)
    cout<<n<<endl;
else
    cout<<"1"<<endl;

}
}
