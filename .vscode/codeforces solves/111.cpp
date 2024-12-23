#include<bits/stdc++.h>
using namespace std;
vector<int>v[14];
int level[14];
int parent[14];
int flag=0;
 void BFS(int source){
 level[source]=0;
 queue<int>q;
 q.push(source);
 while(!q.empty()){
    int u=q.front();
    q.pop();
    for(int j=0;j<v[u].size();j++){
    int x=v[u][j];
    if(level[x]==-1){
        parent[x]=u;
        level[x]=level[u]+1;
        q.push(x);
    }
    if(level[x]==level[u]){
        flag=1;
    }
}
 }
 }
void path(int node){
if(node != parent[node]){
    path(parent[node]);
}
cout<<node<<" ";
}
int main(){
int n,e;
cin>>n >>e;
for(int i=0;i<e;i++){
    int n1,n2;
    cin>>n1 >>n2;
    v[n1].push_back(n2);
    v[n2].push_back(n1);
}
for(int i=1;i<=n;i++){
    cout<<i<<"->"<<" ";
for(int j=0;j<v[i].size();j++){
    cout<<v[i][j]<<",";
}
cout<<endl;
}
for(int i=1;i<=n;i++){
        level[i]=-1;
        parent[i]=i;
}
BFS(1);
for(int i=1;i<=n;i++){
       cout<< i<<"="<< level[i] <<endl;
}
if(flag==1)
    cout<<"cycle found"<<endl;
else
cout<<"cycle not found"<<endl;
path(9);
return 0;
}

/*
10 13
1 2
1 4
1 3
2 6
6 10
3 7
4 7
3 8
7 8
7 9
9 10
8 5
10 5
*/
