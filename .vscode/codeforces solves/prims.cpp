#include <bits/stdc++.h>
using namespace std;
#define INF 1e5

// Custom comparator for priority queue to select minimum weight edge
struct Compare {
    bool operator()(pair<int, int> const& p1, pair<int, int> const& p2) {
        return p1.first > p2.first;
    }
};

// Graph represented as adjacency list
vector<pair<int, int>> adj[1000];

// Set to store the edges in the MST
unordered_set<string> mstEdges;

// Global variables to store total cost and node information
int totalCost = 0;
int minWeight[1000];
int parentNode[1000];
bool isVisited[1000];

// Lambda function to initialize data structures
auto initialize = [](int n) {
    fill(begin(minWeight), end(minWeight), INF);
    fill(begin(isVisited), end(isVisited), false);
    fill(begin(parentNode), end(parentNode), -1);
};

// Function to perform Prim's algorithm
void primAlgorithm(int startNode, int n) {
    initialize(n);
    minWeight[startNode] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> minHeap;
    minHeap.push({0, startNode});

    while (!minHeap.empty()) {
        int current = minHeap.top().second;
        minHeap.pop();

        if (isVisited[current])
            continue;

        isVisited[current] = true;

        for (auto& edge : adj[current]) {
            int neighbor = edge.first;
            int weight = edge.second;

            if (!isVisited[neighbor] && minWeight[neighbor] > weight) {
                parentNode[neighbor] = current;
                minWeight[neighbor] = weight;
                minHeap.push({weight, neighbor});
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (parentNode[i] != -1) {
            stringstream edgeStr;
            edgeStr << "(" << i << "," << parentNode[i] << ")";
            mstEdges.insert(edgeStr.str());
            totalCost += minWeight[i];
        }
    }
}

int main() {
    int numNodes, numEdges, nodeIdCounter = 1;
    unordered_map<string, int> nodeToId;
    unordered_map<int, string> idToNode;

    cout << "Enter number of nodes and edges: ";
    cin >> numNodes >> numEdges;
    cout << "Enter Source, Destination, and Weight for each edge:" << endl;

    for (int i = 0; i < numEdges; i++) {
        string src, dest;
        int weight;
        cin >> src >> dest >> weight;

        if (!nodeToId.count(src)) {
            nodeToId[src] = nodeIdCounter++;
        }

        if (!nodeToId.count(dest)) {
            nodeToId[dest] = nodeIdCounter++;
        }

        adj[nodeToId[src]].push_back({nodeToId[dest], weight});
        adj[nodeToId[dest]].push_back({nodeToId[src], weight});
    }

    for (auto& entry : nodeToId) {
        idToNode[entry.second] = entry.first;
    }

    int startNode;
    cout << "Enter the starting node id (1 to " << numNodes << "): ";
    cin >> startNode;

    primAlgorithm(startNode, numNodes);

    cout << "MST Edges: {";
    for (auto it = mstEdges.begin(); it != mstEdges.end(); ++it) {
        if (it != mstEdges.begin()) cout << ", ";
        cout << *it;
    }
    cout << "}" << endl;

    cout << "Total Cost: " << totalCost << endl;
    cout << "Total Edges in MST: " << mstEdges.size() << endl;

    return 0;
}
