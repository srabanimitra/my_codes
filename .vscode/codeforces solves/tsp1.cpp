#include<bits/stdc++.h>
using namespace std;
#define N 5

struct TSPNode
{
    int nodeID;
    pair<int, int> connection;
    int totalPathCost;
    bool visitedNodes[N];
    vector<int> travelPath;

    int modifiedMatrix[N][N];

    TSPNode() {}

    TSPNode(int currentNode, int previousNode, int matrix[N][N])
    {
        nodeID = currentNode;
        totalPathCost = 0;
        connection.first = previousNode;
        connection.second = currentNode;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                modifiedMatrix[i][j] = matrix[i][j];
        }
        visitedNodes[currentNode] = true;
    }

    void resetVisitedNodes()
    {
        for (int i = 0; i < N; i++)
            visitedNodes[i] = false;
    }

    void updateVisitedArray(bool v[N])
    {
        for (int i = 0; i < N; i++)
            visitedNodes[i] = v[i];
        visitedNodes[nodeID] = true;
    }

    void updatePath(vector<int>& v)
    {
        for (int i = 0; i < v.size(); i++)
        {
            travelPath.push_back(v[i]);
        }
    }

};

int minimizeCost(int matrix[N][N])
{
    int cost = 0;

    // Row reduction
    for (int i = 0; i < N; i++)
    {
        int minValue = INT_MAX;
        for (int j = 0; j < N; j++)
        {
            if (matrix[i][j] < minValue)
                minValue = matrix[i][j];
        }
        for (int k = 0; k < N; k++)
        {
            if (matrix[i][k] != INT_MAX)
                matrix[i][k] -= minValue;
        }
        if (minValue != INT_MAX)
            cost += minValue;
    }

    // Column reduction
    for (int i = 0; i < N; i++)
    {
        int minValue = INT_MAX;
        for (int j = 0; j < N; j++)
        {
            if (matrix[j][i] < minValue)
                minValue = matrix[j][i];
        }
        for (int k = 0; k < N; k++)
        {
            if (matrix[k][i] != INT_MAX)
                matrix[k][i] -= minValue;
        }
        if (minValue != INT_MAX)
            cost += minValue;
    }

    return cost;
}

void pickMinCostNode(vector<TSPNode>& nodeList)
{
    int minimumCost = INT_MAX;
    int idx;

    for (int i = 0; i < nodeList.size(); i++)
    {
        if (nodeList[i].totalPathCost < minimumCost)
        {
            minimumCost = nodeList[i].totalPathCost;
            idx = i;
        }
    }

    swap(nodeList[idx], nodeList[nodeList.size() - 1]);
}

void applyInfinity(int matrix[N][N], int row, int col, bool visited[N])
{
    for (int i = 0; i < N; i++)
    {
        matrix[row][i] = INT_MAX;
        matrix[i][col] = INT_MAX;
    }
    for (int i = 0; i < N; i++)
    {
        if (visited[i] == true)
        {
            matrix[col][i] = INT_MAX;
        }
    }
}

void showTravelPath(vector<int>& path, int node)
{
    for (int i = 0; i < path.size(); i++)
        cout << path[i] + 1 << "->";
    cout << node + 1;
}

TSPNode solveTSP(int matrix[N][N], int start)
{
    TSPNode initialNode(start, -1, matrix);
    initialNode.totalPathCost = minimizeCost(initialNode.modifiedMatrix);
    initialNode.resetVisitedNodes();
    initialNode.visitedNodes[initialNode.nodeID] = true;

    vector<TSPNode> activeNodes;
    activeNodes.push_back(initialNode);

    while (!activeNodes.empty())
    {
        pickMinCostNode(activeNodes);
        TSPNode currentNode = activeNodes[activeNodes.size() - 1];

        cout << "Path: ";
        showTravelPath(currentNode.travelPath, currentNode.nodeID);
        cout << endl;

        activeNodes.pop_back();
        currentNode.travelPath.push_back(currentNode.nodeID);

        for (int i = 0; i < N; i++)
        {
            if (currentNode.modifiedMatrix[currentNode.nodeID][i] != INT_MAX)
            {
                TSPNode childNode(i, currentNode.nodeID, currentNode.modifiedMatrix);

                childNode.updateVisitedArray(currentNode.visitedNodes);
                childNode.updatePath(currentNode.travelPath);

                applyInfinity(childNode.modifiedMatrix, currentNode.nodeID, childNode.nodeID, childNode.visitedNodes);

                childNode.totalPathCost = currentNode.totalPathCost +
                    currentNode.modifiedMatrix[currentNode.nodeID][i] + minimizeCost(childNode.modifiedMatrix);

                cout << "Node: " << childNode.nodeID + 1 << " ";
                cout << "Cost: " << childNode.totalPathCost << endl;

                for (int k = 0; k < N; k++)
                {
                    for (int j = 0; j < N; j++)
                    {
                        if (childNode.modifiedMatrix[k][j] == INT_MAX)
                            cout << "x\t";
                        else
                            cout << childNode.modifiedMatrix[k][j] << "\t";
                    }
                    cout << endl;
                }

                activeNodes.push_back(childNode);
            }

            cout << endl;
        }

        int visitedCount = 0;
        for (int i = 0; i < N; i++)
        {
            if (currentNode.visitedNodes[i] == true)
                visitedCount++;
        }

        if (visitedCount == N)
        {
            currentNode.travelPath.push_back(currentNode.nodeID);
            return currentNode;
        }
    }
}

int main()
{
    int adjMatrix[N][N] =
    {
        {INT_MAX, 20, 30, 10, 11},
        {15, INT_MAX, 16, 4, 2},
        {3, 5, INT_MAX, 2, 4},
        {19, 6, 18, INT_MAX, 3},
        {16, 4, 7, 16, INT_MAX}
    };

    TSPNode result = solveTSP(adjMatrix, 0);

    cout << endl;
    for (int i = 0; i < N; i++)
        cout << result.travelPath[i] + 1 << " -> ";

    cout << "1" << endl;
    cout << "Total cost: " << result.totalPathCost;

    return 0;
}
