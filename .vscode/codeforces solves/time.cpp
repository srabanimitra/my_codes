#include <bits/stdc++.h>
using namespace std;

void generate_permutations(string input_str) {
    int n = input_str.size();
    int total_permutations = 1 << n; // Total number of permutations is 2^n

    for (int i = 0; i < total_permutations; ++i) {
        std::string permutation;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                permutation += input_str[j];
            }
        }
        std::cout << permutation << std::endl;
    }
}

int main() {
    string input_str = "abz";
    sort(input_str.begin(), input_str.end());
    generate_permutations(input_str);
    return 0;
}
