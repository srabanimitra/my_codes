#include<bits/stdc++.h>
using namespace std;

 void pairs(string s, string s1, bool used[]) {
    if (s1.size() == s.size()) {
        cout << s1 << endl;
        return;
    }

    for (int i = 0; i < s.size(); ++i) {
        if (!used[i]) {
            used[i] = true;
            pairs(s, s1 + s[i], used);
            used[i] = false;
        }
    }
}

int main() {
    string s = "abh";
   sort(s.begin(), s.end());
    bool used[s.size()] = {false};
    pairs(s, "", used);
    return 0;
}
