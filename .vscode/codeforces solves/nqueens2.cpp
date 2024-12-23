#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> x; // Store the column number for each queen. The index represents the queen/row number
int cnt = 0;

bool Place(int k, int i) { // Checks if a queen can be placed in a given row k and column i without conflicting with other queens.
    for (int j = 0; j < k; j++) { // Check all previous rows
       // if (x[j] == i || abs(x[j] - i) == abs(j - k))
       //if((x[j]==i) || (abs(x[j]-i)==abs(j-k)==1))
       if((x[j]==i) || (abs(x[j]-i)== 1 && abs(j-k)==1))
            return false;
    }
    return true;
}

void N_Queens(int k, int n) { // k is the current row
    for (int i = 0; i < n; i++) { // Iterates over all columns i in the current row k
        if (Place(k, i)) {
            x[k] = i; // Place kth queen in column i
            if (k == n - 1) { // If last row is reached
                cnt++;
                cout << "Way no " << cnt << " is :" << endl;
                for (int q = 0; q < n; q++)
                    cout << "Queen [" << q + 1 << "] sits in Row " << q + 1 << " , column " << x[q] + 1 << endl;
                cout << endl;
            } else {
                N_Queens(k + 1, n); // Go to next row/queen
            }
        }
    }
}

int main() {
    cout << "Enter the Number of Queens: " << endl;
    cin >> n;
    x.resize(n); // Resize the vector to the number of queens
    N_Queens(0, n); // Start with the 0th row
    return 0;
}
