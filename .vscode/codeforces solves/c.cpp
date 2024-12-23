#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MAX_LIMIT = 1000000;

vector<int> distinct_primes(int max_limit) {
    vector<int> count1(max_limit + 1, 0);

    for (int i = 2; i <= max_limit; ++i) {
        if (count1[i] == 0) {
            for (int multiple = i; multiple <= max_limit; multiple += i) {
                count1[multiple]++;
            }
        }
    }

    return count1;
}

long long int prime_factors1(int L, int R, int N, vector<int>& count1) {
    long long int count = 0;
    for (int num = L; num <= R; ++num) {
        if (count1[num] == N) {
            count++;
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;

    vector<pair<int, pair<int, int>>> q;
    int max_limit = 0;

    for (int i = 0; i < T; ++i) {
        int L, R, N;
        cin >> L >> R >> N;
        q.push_back({L, {R, N}});
        max_limit = max(max_limit, R);
    }


    vector<int> count1 = distinct_primes(max_limit);

    vector<long long int> results;
    for (auto query : q) {
        int L = query.first;
        int R = query.second.first;
        int N = query.second.second;
        long long int result = prime_factors1(L, R, N, count1);
        results.push_back(result);
    }

    for (long long int res : results) {
        cout << res << "\n";
    }

    return 0;
}
//10000 200000 5
