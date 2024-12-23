#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;
int evaluate(const string& expr) {
    int sum = 0;
    string num = "";
    for (char c : expr) {
        if (c == '+') {
            sum += stoi(num);
            num = "";
        } else {
            num += c;
        }
    }
    sum += stoi(num);
    return sum;
}
void s2(const string& s, int pos, string current, vector<string>& s1) {
    if (pos == s.size()) {
        s1.push_back(current);
        return;
    }
    s2(s, pos + 1, current + s[pos], s1);

    if (pos < s.size() - 1) {
        s2(s, pos + 1, current + s[pos] + '+', s1);
    }
}

int main() {
    string S;
    cin >> S;

    vector<string> s1;
    s2(S, 0, "", s1);

    int totalSum = 0;
    for (const string& combination : s1) {
        totalSum += evaluate(combination);
    }

    cout << totalSum << endl;
    return 0;
}
