
#include <bits/stdc++.h>

using namespace std;


// Function to check if a queen can be placed at (k, i)

bool Place(const vector<int>& x, int k, int i) {

    for (int j = 1; j < k; ++j) {

        if (x[j] == i || abs(x[j] - i) == abs(j - k))

//if((x[j]==i) || (abs(x[j]-i)==abs(j-k)==1))
       {

            return false;

        }

    }

    return true;

}


// Function to solve the N-Queens problem using backtracking

void NQueens(vector<int>& x, int k, int n) {

    for (int i = 1; i <= n; ++i) {

        if (Place(x, k, i)) {

            x[k] = i;

            if (k == n) {

                // Print the solution

                for (int j = 1; j <= n; ++j) {

                    cout << x[j] << " ";

                }

                cout << endl;

            } else {

                NQueens(x, k + 1, n);

            }

        }

    }

}


int main() {

    int n;

    cout << "Enter the value of n: ";

    cin >> n;



    // Array to store the position of queens

    vector<int> x(n + 1, 0);


    // Start solving from the first queen

    NQueens(x, 1, n);


    return 0;

}
