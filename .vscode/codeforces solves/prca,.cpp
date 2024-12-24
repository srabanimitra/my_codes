#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int actualBCount = 0;
        int operationsNeeded = 0;

        for (int i = 0; i < n; ++i) {
            if (s[i] == 'B') {
                actualBCount++;
            }
        }

        if (actualBCount == k) {
            cout << "0\n";  // No operations needed
        } else if (actualBCount < k) {
            cout << "1\n" << n << " B\n";  // Add 'B' at the end
        } else {
            for (int i = 0; i < n; ++i) {
                if (s[i] == 'B') {
                    cout << "1\n" << i + 1 << " A\n";
                    operationsNeeded++;
                }

                if (operationsNeeded == actualBCount - k) {
                    break;
                }
            }
        }
    }

    return 0;
}

