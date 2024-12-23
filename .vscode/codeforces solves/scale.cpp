#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> reduceGrid(int n, int k, const vector<vector<int>>& grid) {
    // Initialize the reduced grid
    vector<vector<int>> reducedGrid(n / k, vector<int>(n / k));

    // Loop through each block
    for (int i = 0; i < n; i += k) {
        for (int j = 0; j < n; j += k) {
            // Collect the value in the kxk block (all values are guaranteed to be the same)
            int blockValue = grid[i][j];
            reducedGrid[i / k][j / k] = blockValue;
        }
    }

    return reducedGrid;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<vector<int>> grid(n, vector<int>(n));

        for (int i = 0; i < n; ++i) {
            string row;
            cin >> row;
            for (int j = 0; j < n; ++j) {
                grid[i][j] = row[j] - '0';
            }
        }

        vector<vector<int>> reducedGrid = reduceGrid(n, k, grid);

        for (const auto& row : reducedGrid) {
            for (int cell : row) {
                cout << cell;
            }
            cout << endl;
        }
    }

    return 0;
}
