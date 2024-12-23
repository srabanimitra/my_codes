
#include<bits/stdc++.h>
using namespace std;

string color[100] ;

vector<int> v[100];

void dfs(int source) {
 int u =source;
    color[u] = "GRAY";

    for (int i = 0; i < v[u].size(); i++) {
        int n = v[u][i];
        if (color[n] == "WHITE") {
            dfs(n);
        }
    }

    color[source] = "BLACK";
    cout<<source<<" ";
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

