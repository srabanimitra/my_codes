#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        std::string x, y;
        std::cin >> x >> y;

        int len = x.length();

        for (int i = 0; i < len; i++) {
            // Calculate the product of current digits
            int current_product = (x[i] - '0') * (y[i] - '0');

            // Calculate the product if the digits were swapped
            int swapped_product = (y[i] - '0') * (x[i] - '0');

            // Perform the swap if it results in a higher product at this position
            if (swapped_product > current_product) {
                std::swap(x[i], y[i]);
            }
        }

        // Output the potentially modified x and y
        std::cout << x << "\n" << y << "\n";
    }
    return 0;
}
