#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        string s1, s2;
        cin >> s1 >> s2;

        if (s1.length() != s2.length()) {
            cout << "Case #" << i << ": Not Possible" << endl;
        } else {
            string sum = s1 + s1;
            if (sum.find(s2) != string::npos) {
                cout << "Case #" << i << ": Possible" << endl;
            } else {
                cout << "Case #" << i << ": Not Possible" << endl;
            }
        }
    }

}
