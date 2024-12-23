/*
#include <iostream>

#include <stack>


using namespace std;


int set[] = {2,1,4,3};

int numberOfElements = 4, sum = 5;

stack<int> solutionSet;

bool hasSolution = false;


void displaySolutionSet() {

    stack<int> temp;


    while (!solutionSet.empty()) {

        cout <<  solutionSet.top() << " ";

        temp.push(solutionSet.top());

        solutionSet.pop();

    }

    cout << '\n';

    while (!temp.empty()) {

        solutionSet.push(temp.top());

        temp.pop();

    }

}


void solve(int s, int idx) {

    // return if s exceed sum

    if (s > sum)

        return;


    // check if stack has the right subsets of numbers

    if (s == sum) {

        hasSolution = true;

        // display stack contents

        displaySolutionSet();

        // Though found a solution but deliberately

        // returning to find more

        return;

    }


    for (int i = idx; i < numberOfElements; i++) {

        // Adding element to the stack

        solutionSet.push(set[i]);


        // add set[i] to the 's' and recursively start from next number

        solve(s + set[i], i + 1);


        // Removing element from stack i.e Backtracking

        solutionSet.pop();

    }

}


int main() {

    solve(0, 0);


    if (hasSolution == false)

        cout << "No Solution";


    return 0;

}
*/


#include <bits/stdc++.h>

using namespace std;


void SumOfSub(vector<int>& w, vector<int>& x, int s, int k, int r, int m) {

    x[k] = 1; // Generate left child

    if (s + w[k] == m) { // Subset found

        for (int i = 1; i <= k; ++i) {

            if (x[i] == 1) cout << w[i] << " ";

        }

        cout << endl;

    } else if (s + w[k] + w[k + 1] <= m) {

        SumOfSub(w, x, s + w[k], k + 1, r - w[k], m);

    }

    if ((s + r - w[k] >= m) && (s + w[k + 1] <= m)) { // Generate right child

        x[k] = 0;

        SumOfSub(w, x, s, k + 1, r - w[k], m);

    }

}


int main() {

    int n, m;

    cout << "Enter the number of elements: ";

    cin >> n;

    vector<int> w(n + 1); // We use 1-based indexing

    cout << "Enter the elements : ";

    for (int i = 1; i <= n; ++i) {

        cin >> w[i];

    }

    sort(w.begin(),w.end());

    cout << "Enter the value of SUM: ";

    cin >> m;


    vector<int> x(n + 1, 0);

    int total = 0;

    for (int i = 1; i <= n; ++i) {

        total += w[i];

    }

    SumOfSub(w, x, 0, 1, total, m);


    return 0;

}
