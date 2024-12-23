/*#include<bits/stdc++.h>
using namespace std;

string color[100] ;

vector<int> v[100];

void dfs(int node) {
    color[node] = "GRAY";

    cout << node << " ";


    for (int i = 0; i < v[node].size(); i++) {
        int neighbor = v[node][i];

        if (color[neighbor] == "WHITE") {
            dfs(neighbor);
        }
    }

    color[node] = "BLACK";
}

int main() {
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++) {
        int n1, n2;
        cin >> n1 >> n2;
        v[n1].push_back(n2);
        v[n2].push_back(n1);
    }

for(int i=1;i<=n;i++){
        color [i]="WHITE";

}

    dfs(1);

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
/*
9 7
0 1
1 3
1 2
2 3
3 4
5
7 6
6 8
*/
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;

vector<int> v[N];
bool vis[N];
bool loop= false;
//vector<vector<int>>c1;
//vector<int>c2;
bool dfs(int node,int parent) {
   // if(vis[node]) return;
  // cout<<node<<endl;
  //c2.push_back(node);
    vis[node]=true;
    for(int child : v[node]){
            if(vis[child] && child==parent)continue;
    if(vis[child]) return true;
           // cout<<"parent"<<node<<" ,child "<<child<<endl;
           // if(vis[child])continue;
           loop |= dfs(child,node);
       // dfs(child);
    }
    return loop;
}

int main() {
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++) {
        int n1, n2;
        cin >> n1 >> n2;
        v[n1].push_back(n2);
        v[n2].push_back(n1);
    }
int cnt=0;
bool loop=false;
for (int i = 1; i <=n; i++) {
    if(vis[i])continue;
    if(dfs(i,0))
    {
        loop=true;
        break;
    }
 //   c2.clear();
  //  dfs(i);
 //   c1.push_back(c2);
   // cnt++;
}
cout<<loop<<endl;
  /* cout<<cnt<<endl;
for(auto c3:c1){
    for(int node :c3){
        cout<<node<<" ";
    }
    cout<<endl;
}*/
    return 0;
}
