
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        // Calculate the maximum stability
        // The maximum stability is achieved by placing horizontal bricks in each row
        // or placing vertical bricks in each column, whichever is minimum
        // The result is the product of the two values

        int max_horizontal = min(n, m / 2);
        int max_vertical = min(m, n / 2);

        int max_stability = max_horizontal * n + max_vertical * m - max_horizontal * max_vertical * 2;

        cout << max_stability << endl;
    }

    return 0;
}
