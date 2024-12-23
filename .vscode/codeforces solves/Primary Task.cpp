#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;

        if (n.substr(0, 2) == "10" && n.length() > 2) {
            string s = n.substr(2);
            int s1=stoi(s);
            if (s[0] != '0' && s1 >= 2) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }

}
