#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void countt(ll l){
ll count=1;
     for (ll i = 1; i <= l; ++i) {
        count *= i;
    }
    cout << count << "\n";
}

void pairs(string s) {
    sort(s.begin(), s.end());
     do {
        cout << s << "\n";
    } while (next_permutation(s.begin(), s.end()));
}

int main() {
    string s;
    cin>>s;
    ll l=s.size();
countt(l);
    pairs(s);
}
