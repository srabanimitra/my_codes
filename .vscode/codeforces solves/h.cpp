#include <iostream>

int main() {
    long long X, P, C;
    std::cin >> X >> P >> C;


    long long r_yen = X - P;


    long long chocolates_bought = r_yen / C;


    long long total_cost = chocolates_bought * C;


    long long yen_left = r_yen - total_cost;


    std::cout << yen_left << std::endl;

    return 0;
}
