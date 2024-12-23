#include<bits/stdc++.h>
using namespace std;

vector<int> v[100];
int color[100];

bool isBicolorable(int start, int n) {
    // Initialize color array
    memset(color, -1, sizeof(color));

    // Assign the first color to the starting node
    color[start] = 0;

    queue<int> q;
    q.push(start);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int i = 0; i < v[u].size(); i++) {
            int neighbor = v[u][i];

            // If the neighbor has the same color as the current node, the graph is not bicolorable
            if (color[neighbor] == color[u])
                return false;

            // If the neighbor has not been colored yet, assign a different color and enqueue it
            if (color[neighbor] == -1) {
                color[neighbor] = 1 - color[u];
                q.push(neighbor);
            }
        }
    }

    // If we have assigned colors to all nodes without any conflicts, the graph is bicolorable
    return true;
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

    // Starting node for BFS (can be any node, here assumed to be 1)
    int start = 1;

    if (isBicolorable(start, n))
        cout << "The graph is bicolorable.\n";
    else
        cout << "The graph is not bicolorable.\n";

    return 0;
}
