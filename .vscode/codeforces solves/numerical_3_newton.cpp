#include <bits/stdc++.h>
using namespace std;

vector<double> v = {3, -8, 2, 5, -1};  // Coefficients of the polynomial: 3x^4 - 8x^3 + 2x^2 + 5x - 1

// Function to evaluate the polynomial using Horner's method
double hons(double x) {
    double p = v[0];
    for (int i = 1; i < (int)v.size(); i++) {
        p = p * x + v[i];
    }
    return p;
}

// Function to find a root in a given interval [x0, x1] using the Modified Bisection Method
void findRoots(double x0, double x1, double tolerance, double &root, int &iterations) {
    double e;
    iterations = 0;
    while (true) {
        double xr = (x0 + x1) / 2;
        double fr = hons(xr);
        double f0 = hons(x0);

        if (fr * f0 > 0) {
            x0 = xr;
        } else {
            x1 = xr;
        }

        e = fabs((x1 - x0) / x1);
        iterations++;

        if (e < tolerance) {
            root = xr;
            return;
        }
    }
}

int main() {
    double tolerance = 0.000001;
    double increment = 0.1;
    double a = -2.04;
    double b = 2.04;
    int rootNumber = 0;

    cout << "Modified Bisection:\n";
    cout << "Interval Size [" << a << ", " << b << "]\n";

    for (double x0 = a; x0 < b; x0 += increment) {
        double x1 = x0 + increment;
        double f0 = hons(x0);
        double f1 = hons(x1);

        if (f0 * f1 < 0) {  // There is a root in the interval [x0, x1]
            double root;
            int iterations;
            findRoots(x0, x1, tolerance, root, iterations);
            rootNumber++;
            cout << "Root Number " << rootNumber << " is " << root << " and was found in " << iterations << " iterations\n";
        }
    }

    return 0;
}
