#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

void generate_permutations(std::string input_str, std::string current_permutation, std::vector<bool>& used) {
    if (current_permutation.size() == input_str.size()) {
        std::cout << current_permutation << std::endl;
        return;
    }

    for (int i = 0; i < input_str.size(); ++i) {
        if (!used[i]) {
            used[i] = true;
            generate_permutations(input_str, current_permutation + input_str[i], used);
            used[i] = false;
        }
    }
}

int main() {
    std::string input_str = "abz";
    std::sort(input_str.begin(), input_str.end());
    std::vector<bool> used(input_str.size(), false);
    generate_permutations(input_str, "", used);
    return 0;
}
