
#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;

vector<pair<int,int> >v[N];


int main()
{

    int n,e;
    cin>>n >>e;
    for(int i=0; i<e; i++)
    {
        int n1,n2,w;
        cin>>n1 >>n2 >>w;
        v[n1].push_back({n2,w});
        v[n2].push_back({n1,w});

    }
    for(int i=1; i<=n; i++)
    {
        cout<<i<<"->";
        for(int j=0; j<v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;

    }


}
/*
6 9
1 3 4
1 5 3
3 5 2
3 4 7
3 6 8
3 2 9
2 6 1
4 6 2
5 6 3
*/
#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

typedef pair<int, int> pii; // pair of (node, distance)

// Graph represented as an adjacency list with weights
vector<vector<pii>> graph;

vector<int> dijkstra(int source) {
    int n = graph.size(); // Number of nodes
    vector<int> distances(n, numeric_limits<int>::max()); // Initialize distances to infinity
    distances[source] = 0; // Distance from source to itself is 0

    priority_queue<pii, vector<pii>, greater<pii>> pq; // Min-heap to store nodes based on distances
    pq.push({0, source}); // (distance, node)

    while (!pq.empty()) {
        int current_distance = pq.top().first;
        int current_node = pq.top().second;
        pq.pop();

        // Ignore the node if we have already found a shorter path to it
        if (current_distance > distances[current_node]) {
            continue;
        }

        // Traverse all adjacent nodes of the current node
        for (auto neighbor : graph[current_node]) {
            int neighbor_node = neighbor.first;
            int weight = neighbor.second;
            int distance = current_distance + weight;

            // If the new distance is shorter than the current distance, update it
            if (distance < distances[neighbor_node]) {
                distances[neighbor_node] = distance;
                pq.push({distance, neighbor_node});
            }
        }
    }

    return distances;
}

int main() {
    // Example usage
    int n = 6; // Number of nodes
    graph.resize(n);
    graph[0].push_back({1, 5}); // Edge from node 0 to node 1 with weight 5
    graph[0].push_back({2, 3}); // Edge from node 0 to node 2 with weight 3
    graph[1].push_back({3, 6}); // Edge from node 1 to node 3 with weight 6
    graph[2].push_back({3, 2}); // Edge from node 2 to node 3 with weight 2
    graph[2].push_back({4, 7}); // Edge from node 2 to node 4 with weight 7
    graph[3].push_back({5, 1}); // Edge from node 3 to node 5 with weight 1
    graph[4].push_back({5, 3}); // Edge from node 4 to node 5 with weight 3

    int source = 0; // Source node
    vector<int> distances = dijkstra(source);

    // Output shortest distances from the source node
    cout << "Shortest distances from node " << source << ":\n";
    for (int i = 0; i < n; ++i) {
        cout << "Node " << i << ": " << distances[i] << "\n";
    }

    return 0;
}
