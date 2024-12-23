/*  #include <bits/stdc++.h>
using namespace std;

// Function to calculate the length of the Longest Common Subsequence (LCS)
void computeLCS(const string& str1, const string& str2, vector<vector<int>>& lengths, vector<vector<char>>& directions) {
    int len1 = str1.length();
    int len2 = str2.length();

    lengths.resize(len1 + 1, vector<int>(len2 + 1, 0));
    directions.resize(len1 + 1, vector<char>(len2 + 1, ' '));

    for (int i = 1; i <= len1; ++i) {
        for (int j = 1; j <= len2; ++j) {
            if (str1[i - 1] == str2[j - 1]) {
                lengths[i][j] = lengths[i - 1][j - 1] + 1;
                directions[i][j] = 'D'; // Diagonal
            } else if (lengths[i - 1][j] >= lengths[i][j - 1]) {
                lengths[i][j] = lengths[i - 1][j];
                directions[i][j] = 'U'; // Up
            } else {
                lengths[i][j] = lengths[i][j - 1];
                directions[i][j] = 'L'; // Left
            }
        }
    }
    cout << "Length of LCS: " << lengths[len1][len2] << "\n";
}

// Function to print the LCS using the directions matrix
void displayLCS(const vector<vector<char>>& directions, const string& str1, int i, int j) {
    if (i == 0 || j == 0) return;
    if (directions[i][j] == 'D') {
        displayLCS(directions, str1, i - 1, j - 1);
        cout << str1[i - 1];
    } else if (directions[i][j] == 'U') {
        displayLCS(directions, str1, i - 1, j);
    } else {
        displayLCS(directions, str1, i, j - 1);
    }
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    vector<vector<int>> lengths;
    vector<vector<char>> directions;

    // Compute the LCS
    computeLCS(str1, str2, lengths, directions);

    // Print the LCS
    cout << "LCS: ";
    displayLCS(directions, str1, str1.length(), str2.length());
    cout << endl;

    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the length of the Longest Common Subsequence (LCS)
void computeLCS(const string& str1, const string& str2, vector<vector<int>>& lengths, vector<vector<char>>& directions) {
    int len1 = str1.length();
    int len2 = str2.length();

    lengths.resize(len1 + 1, vector<int>(len2 + 1, 0));
    directions.resize(len1 + 1, vector<char>(len2 + 1, ' '));

    for (int i = 1; i <= len1; ++i) {
        for (int j = 1; j <= len2; ++j) {
            if (str1[i - 1] == str2[j - 1]) {
                lengths[i][j] = lengths[i - 1][j - 1] + 1;
                directions[i][j] = 'D'; // Diagonal
            } else if (lengths[i - 1][j] >= lengths[i][j - 1]) {
                lengths[i][j] = lengths[i - 1][j];
                directions[i][j] = 'U'; // Up
            } else {
                lengths[i][j] = lengths[i][j - 1];
                directions[i][j] = 'L'; // Left
            }
        }
    }
    cout << "Length of LCS: " << lengths[len1][len2] << "\n";
}

// Function to print the LCS in reverse order
void displayLCS(const vector<vector<char>>& directions, const string& str1, int i, int j, string& lcs) {
    if (i == 0 || j == 0) return;
    if (directions[i][j] == 'D') {
        displayLCS(directions, str1, i - 1, j - 1, lcs);
        lcs.push_back(str1[i - 1]); // Push the character in LCS string
    } else if (directions[i][j] == 'U') {
        displayLCS(directions, str1, i - 1, j, lcs);
    } else {
        displayLCS(directions, str1, i, j - 1, lcs);
    }
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    vector<vector<int>> lengths;
    vector<vector<char>> directions;

    // Compute the LCS
    computeLCS(str1, str2, lengths, directions);

    // Build the LCS string
    string lcs;
    displayLCS(directions, str1, str1.length(), str2.length(), lcs);

    // Reverse the LCS string
    reverse(lcs.begin(), lcs.end());

    // Print the reversed LCS
    cout << "Reversed LCS: " << lcs << endl;

    return 0;
}

