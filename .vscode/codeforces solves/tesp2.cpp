#include <bits/stdc++.h>
using namespace std;
#define N 4



struct Node {
    vector<int> path;
    int reducedMatrix[N][N];
    int cost;
    int vertex;
    int level;


    bool operator<(const Node& other) const {
        return cost > other.cost;
    }
};

int rowReduction(int matrix[N][N], int row) {
    int minVal = INT_MAX;
    for (int i = 0; i < N; i++) {
        if (matrix[row][i] < minVal) {
            minVal = matrix[row][i];
        }
    }
    if (minVal == INT_MAX) return 0;
    for (int i = 0; i < N; i++) {
        if (matrix[row][i] != INT_MAX) {
            matrix[row][i] -= minVal;
        }
    }
    return minVal;
}

int colReduction(int matrix[N][N], int col) {
    int minVal = INT_MAX;
    for (int i = 0; i < N; i++) {
        if (matrix[i][col] < minVal) {
            minVal = matrix[i][col];
        }
    }
    if (minVal == INT_MAX) return 0;
    for (int i = 0; i < N; i++) {
        if (matrix[i][col] != INT_MAX) {
            matrix[i][col] -= minVal;
        }
    }
    return minVal;
}

int calculateReducedMatrix(int matrix[N][N]) {
    int reductionCost = 0;

    for (int i = 0; i < N; i++) {
        reductionCost += rowReduction(matrix, i);
    }

    for (int i = 0; i < N; i++) {
        reductionCost += colReduction(matrix, i);
    }

    return reductionCost;
}

// Function to create a new child node
Node createNode(int parentMatrix[N][N], vector<int> path, int level, int i, int j) {
    Node node;
    node.path = path;
    node.path.push_back(j);
    node.level = level;
    node.vertex = j;

    for (int r = 0; r < N; r++) {
        for (int c = 0; c < N; c++) {
            node.reducedMatrix[r][c] = parentMatrix[r][c];
        }
    }

    for (int k = 0; k < N; k++) {
        node.reducedMatrix[i][k] = INT_MAX;
    }

    for (int k = 0; k < N; k++) {
        node.reducedMatrix[k][j] = INT_MAX;
    }

    node.reducedMatrix[j][0] = INT_MAX;

    node.cost = calculateReducedMatrix(node.reducedMatrix);

    return node;
}

int travelingSalesmanProblem(int costMatrix[N][N]) {
    priority_queue<Node> pq;

    Node root;
    root.path.push_back(0);
    root.cost = calculateReducedMatrix(costMatrix);
    root.vertex = 0;
    root.level = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            root.reducedMatrix[i][j] = costMatrix[i][j];
        }
    }

    pq.push(root);


    while (!pq.empty()) {
        Node minCostNode = pq.top();
        pq.pop();

        int i = minCostNode.vertex;


        if (minCostNode.level == N - 1) {
            minCostNode.path.push_back(0);
            cout << "Optimal path: ";
            for (int v : minCostNode.path) {
                cout << v + 1 << " ";
            }
            cout << endl;
            return minCostNode.cost;
        }


        for (int j = 0; j < N; j++) {
            if (minCostNode.reducedMatrix[i][j] != INT_MAX) {
                Node child = createNode(minCostNode.reducedMatrix, minCostNode.path, minCostNode.level + 1, i, j);
                child.cost += minCostNode.cost + minCostNode.reducedMatrix[i][j];
                pq.push(child);
            }
        }
    }

    return -1;
}

int main() {
    int costMatrix[N][N] = {
        {INT_MAX, 29, 20, 21},
        {29, INT_MAX, 15, 17},
        {20, 15, INT_MAX, 28},
        {21, 17, 28, INT_MAX}
    };

    cout << "Minimum cost: " << travelingSalesmanProblem(costMatrix) << endl;

    return 0;
}
