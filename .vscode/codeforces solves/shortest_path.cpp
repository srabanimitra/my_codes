#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAXN = 1000; // Maximum number of vertices

vector<int> graph[MAXN]; // Adjacency list representation
int parent[MAXN]; // To store parent vertices during BFS

void bfs(int s) {
    queue<int> q;
    q.push(s);
    parent[s] = -1; // Mark s as the starting vertex

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        // Explore adjacent vertices
        for (int v : graph[u]) {
            if (parent[v] == -1) {
                parent[v] = u;
                q.push(v);
            }
        }
    }
}

bool hasShortestPath(int s, int t, int u, int v) {
    bfs(s); // Perform BFS from s

    // Check if t is reachable from s
    if (parent[t] == -1)
        return false;

    // Backtrack from t to s and check for edge (u, v)
    int curr = t;
    while (curr != s) {
        if ((curr == u && parent[curr] == v) || (curr == v && parent[curr] == u))
            return true;
        curr = parent[curr];
    }

    return false;
}

int main() {
    // Example usage
    int n, m; // Number of vertices and edges
    cin >> n >> m;

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // Undirected graph
    }

    int s, t, u, v;
    cin >> s >> t >> u >> v;

    if (hasShortestPath(s, t, u, v))
        cout << "There exists a shortest path from s to t containing the edge (u, v).\n";
    else
        cout << "No such path exists.\n";

    return 0;
}
