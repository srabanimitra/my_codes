#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int
pair<ll, ll> p1(ll P) {
    for (ll x = 1; x <= P; x++) {
        ll y = log(P - pow(3, x)) / log(5);
        if (pow(3, x) + pow(5, y) == P)
            return {x, y};
    }
    return {-1, -1};
}

int main() {
    ll P;
cin >> P;
    pair<ll,ll>p2= p1(P);
    if (p2.first != -1 && p2.second != -1) {
        cout << p2.first <<" "<< p2.second  << "\n";
    } else {
        cout << "-1" << endl;
    }

    return 0;
}
