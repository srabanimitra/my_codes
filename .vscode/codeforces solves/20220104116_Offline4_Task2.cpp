#include<bits/stdc++.h>
using namespace std;

void DFS(vector<vector<int>>& graph, int start, vector<bool>& visited) {
    stack<int> s;
    s.push(start);

    while (!s.empty()) {
        int v = s.top();
        s.pop();

        if (!visited[v]) {
            visited[v] = true;
            cout << v << " ";

            for (int u : graph[v]) {
                if (!visited[u]) {
                    s.push(u);
                }
            }
        }
    }
}

int main() {
    int V, E;
    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of edges: ";
    cin >> E;

    vector<vector<int>> graph(V);
    cout << "Enter edges (format: source destination): \n";
    for (int i = 0; i < E; ++i) {
        int src, dest;
        cin >> src >> dest;
        graph[src].push_back(dest);
        graph[dest].push_back(src); // Assuming undirected graph
    }

    int startVertex;
    cout << "Enter the starting vertex for DFS: ";
    cin >> startVertex;

    vector<bool> visited(V, false);
    cout << "DFS Order: ";
    DFS(graph, startVertex, visited);

    return 0;
}
