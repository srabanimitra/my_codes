#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int>a(n);

        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;

            for (int j = 0; j < s.length(); ++j) {
                if (s[j] == '#') {
                   a[n - 1 - i] = j + 1;
                    break;
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            cout <<a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
