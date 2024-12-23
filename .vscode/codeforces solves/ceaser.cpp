#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string decryptCaesarCipher(const string& text) {
    for (int shift = 1; shift <= 25; ++shift) {
        string decryptedText = "";
        for (char c : text) {
            if (isalpha(c)) {
                char decrypted = (c - shift);
                if ((islower(c) && decrypted < 'a') || (isupper(c) && decrypted < 'A')) {
                    decrypted += 26;
                }
                decryptedText += decrypted;
            } else {
                decryptedText += c;
            }
        }
        if (decryptedText.find(" I love you!") != std::string::npos) {
            return decryptedText;
        }
    }
    return "";
}

int main() {
    string et;
    getline(cin, et);

    string ot = decryptCaesarCipher(et);

    cout <<ot << endl;

    return 0;
}
