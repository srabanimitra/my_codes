*******N-QUEENS


#include<bits/stdc++.h>

using namespace std;

//implemented assuming we will place queen no n in row n

int n ;

vector<int> x(100);//store the column number for each queen. The index represents the queen/row number

int cnt=0;


bool Place(int k,int i)//checks if a queen can be placed in a given row k and column i without conflicting with other queens.

{

    for(int j=1; j<=k-1; j++){//k no row te/queen bosabo tai k-1 porjonto queen/row number check korte hbe

        if((x[j]==i) || (abs(x[j]-i)==abs(j-k)))

            return false;

    }

    return true;

}


void N_Queens(int k,int n)//k diye row borarbor jaite thakbo then prottek row er prottek column e kaj korbo

{

    for(int i=1; i<=n; i++){//iterates over all column i in the current row k

        if(Place(k,i)==true){

            x[k]=i;//saving column no i in the kth row/ placing kth queen in colum i

            if(k==n){//then write

                cnt++;

                cout<<"Way no  "<<cnt<<"  is :"<<endl;

                for(int q=1; q<=n; q++)

                    cout<<"Queen ["<<q<<"]  sits in Row "<<q<< " , column "<<x[q]<<"  "<<endl;

                cout<<endl;

            }

            else

                N_Queens(k+1,n);//else go to next row/queen

        }

    }

}


int main()

{

    cout<<"Enter the Number of Queens : "<<endl;

    cin>>n;

    N_Queens(1,n);

    return 0;

}




**********SUM OF SUBSETS


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




Approach 2:

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




#include <bits/stdc++.h>

using namespace std;


// Function to check if a queen can be placed at (k, i)

bool Place(const vector<int>& x, int k, int i) {

    for (int j = 1; j < k; ++j) {

        if (x[j] == i || abs(x[j] - i) == abs(j - k)) {

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
