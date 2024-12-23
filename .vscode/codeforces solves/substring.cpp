#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> charIndexMap;
    int maxLength = 0;
    int left = 0;

    for (int right = 0; right < s.size(); ++right) {
        if (charIndexMap.find(s[right]) != charIndexMap.end() && charIndexMap[s[right]] >= left) {
            left = charIndexMap[s[right]] + 1;
        }
        charIndexMap[s[right]] = right;
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    string s1 = "abcabcbb";
    cout << "Input: " << s1 << endl;
    cout << "Output: " << lengthOfLongestSubstring(s1) << endl;  // Output: 3

    string s2 = "bbbbb";
    cout << "Input: " << s2 << endl;
    cout << "Output: " << lengthOfLongestSubstring(s2) << endl;  // Output: 1

    string s3 = "pwwkew";
    cout << "Input: " << s3 << endl;
    cout << "Output: " << lengthOfLongestSubstring(s3) << endl;  // Output: 3

    return 0;
}

