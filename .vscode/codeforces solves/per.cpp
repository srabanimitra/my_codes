#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

void generate_permutations(std::string input_str) {
    std::sort(input_str.begin(), input_str.end());
    int count = 0;
    do {
        std::cout << input_str << std::endl;
        count++;
    } while(std::next_permutation(input_str.begin(), input_str.end()));
    std::cout << "Total permutations: " << count << std::endl;
}

int main() {
    std::string input_str = "abzytacb";
    generate_permutations(input_str);
    return 0;
}
