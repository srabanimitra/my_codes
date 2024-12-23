#include <bits/stdc++.h>
using namespace std;

//const int INF = numeric_limits<int>::max();
const int INF=1e9;
struct Edge {
    int u, v, weight;
};

void addEdge(vector<Edge>& edges, int u, int v, int weight) {
    edges.push_back({u, v, weight});
}

bool bellmanFord(int V, vector<Edge>& edges, vector<int>& h) {
    h.assign(V, INF);
    h[V - 1] = 0; // New vertex q is the last vertex

    for (int i = 0; i < V - 1; ++i) {
        for (auto& edge : edges) {
            if (h[edge.u] != INF && h[edge.u] + edge.weight < h[edge.v]) {
                h[edge.v] = h[edge.u] + edge.weight;
            }
        }
    }

    // Check for negative weight cycle
    for (auto& edge : edges) {
        if (h[edge.u] != INF && h[edge.u] + edge.weight < h[edge.v]) {
            return false; // Negative weight cycle detected
        }
    }
    return true;
}

void dijkstra(int src, int V, vector<vector<pair<int, int>>>& adj, vector<int>& dist) {
    dist.assign(V, INF);
    dist[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, src});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        if (d > dist[u]) continue;

        for (auto& [v, weight] : adj[u]) {
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
}

void johnson(int V, vector<Edge>& edges) {
    vector<Edge> newEdges = edges;
    for (int i = 0; i < V; ++i) {
        addEdge(newEdges, V, i, 0); // Add edges from new vertex q to all vertices
    }

    vector<int> h;
    if (!bellmanFord(V + 1, newEdges, h)) {
        cout << "Negative weight cycle detected." << endl;
        return;
    }

    vector<vector<pair<int, int>>> adj(V);
    for (auto& edge : edges) {
        int newWeight = edge.weight + h[edge.u] - h[edge.v];
        adj[edge.u].push_back({edge.v, newWeight});
    }

    vector<vector<int>> dist(V, vector<int>(V));
    for (int i = 0; i < V; ++i) {
        dijkstra(i, V, adj, dist[i]);
        for (int j = 0; j < V; ++j) {
            if (dist[i][j] != INF) {
                dist[i][j] = dist[i][j] - h[i] + h[j];
            }
        }
    }

    // Print the shortest paths
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            if (dist[i][j] == INF) {
                cout << "INF ";
            } else {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int V = 4; // Number of vertices
    vector<Edge> edges;

    // Add edges
    addEdge(edges, 0, 1, 1);
    addEdge(edges, 1, 2, 2);
    addEdge(edges, 2, 3, 3);
    addEdge(edges, 3, 0, -6);

    johnson(V, edges);

    return 0;
}
