
#include <iostream>
#include <string>

int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int sum_after_replacement(int n) {
    int result_sum = 0;
    for (int i = 1; i <= n; ++i) {
        result_sum += sum_of_digits(i);
    }
    return result_sum;
}

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        std::cin >> n;
        int result = sum_after_replacement(n);
        std::cout << result << std::endl;
    }

    return 0;
}
