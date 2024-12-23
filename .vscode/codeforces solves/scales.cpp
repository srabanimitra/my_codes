#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<vector<int>> arr(n, vector<int>(n));


        for (int i = 0; i < n; ++i) {
            string row;
            cin >> row;
            for (int j = 0; j < n; ++j) {
                arr[i][j] = row[j] - '0';
            }
        }

        vector<vector<int>> arr2(n / k, vector<int>(n / k));

        for (int i = 0; i < n; i += k) {
            for (int j = 0; j < n; j += k) {
                int Value = arr[i][j];
                arr2[i / k][j / k] = Value;
            }
        }

        for (const auto& row :arr2) {
            for (int cell : row) {
                cout << cell;
            }
            cout << endl;
        }
    }
    }


