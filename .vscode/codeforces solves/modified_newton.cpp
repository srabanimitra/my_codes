#include<bits/stdc++.h>

using namespace std;

#define ll long long int
const double e = .0000001;

double func(double arr[], ll n, double x) {
    double ans = arr[0];

    for (ll i = 1; i < n; ++i) {
        ans = ans * x + arr[i];
    }

    return ans;
}

double der_func(double arr[], ll n, double x) {

    n = n-1;
    double ans = arr[0] * (n);

    for (ll i = 1; i < n; ++i) {
        ans = ans * x + arr[i] * (n- i);
    }

    return ans;
}

void findRoots(double x0) {
    double arr[] = {1, 2, -29, -30};
    ll n = sizeof(arr) / sizeof(arr[0]);

    double x, x1;

    ll cnt = 1;

    while (n > 1) {
        while (true) {
            x1 = x0 - (func(arr, n, x0) / der_func(arr, n, x0));

            if (fabs((x1 - x0) / x1) < e) {
                break;
            }

            x = x0;
            x0 = x1;
        }

        cout << "Iteration No: " << cnt << " x0: " << x << " x1: " << x1 << " f(x0): " << func(arr, n, x) << " f'(x0): " << der_func(arr, n, x1) << endl;

        cnt++;

        n = n - 1;

        double temp[n];

        temp[0] = arr[0];

        for (ll i = 1; i < n; ++i) {
            temp[i] = temp[i - 1] * x1 + arr[i];
        }

        for (ll i = 0; i < n; ++i) {
            arr[i] = temp[i];
        }
    }
}

int main() {
    double x0 = 3;

    findRoots(x0);

    return 0;
}
