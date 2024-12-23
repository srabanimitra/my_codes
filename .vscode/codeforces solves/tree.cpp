
#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int n,k,si[100005],mid,k1;
vector<int>g[100005];
void dfs(int u,int fa){
	si[u]=1;
	for(auto x:g[u]){
		if(x==fa)continue;
		dfs(x,u);
		si[u]+=si[x];
	}
	if(si[u]>=mid)si[u]=0,k1++;
}
int main(){
	int t;cin>>t;
	while(t--){
	cin>>n>>k;for(int i=1;i<=n;i++)g[i].clear();
	for(int i=1;i<n;i++){
		int u,v;cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);}
	int l=1,r=n/(k+1),ans=1;
	while(l<=r){
		mid=(l+r)>>1;k1=0;
		dfs(1,0);
		if(k1>=k+1)l=mid+1,ans=mid;
		else r=mid-1;
	}
	cout<<ans<<endl;
	}
	return 0;
}
