#include<bits/stdc++.h>
using namespace std;

double lagrangeInterpolation(double X[], double Y[], int n, double Xp) {
    double Yp = 0;

    for (int i = 0; i < n; i++) {
        double p = 1;

        for (int j = 0; j < n; j++) {
            if (i != j) {
                p *= (Xp - X[j]) / (X[i] - X[j]);
            }
        }

        Yp += p * Y[i];
    }

    return Yp;
}

int main() {
    double X[] = {1.0, 1.5, 2.0};
    double Y[] = {1.0, 1.2247, 1.4142};

    int n = 3;

    for (double Xp = 2.50; Xp <= 4.00; Xp += 0.50) {
        double interpolatedValue = lagrangeInterpolation(X, Y, n, Xp);
        double trueValue = sqrt(Xp);
        double absoluteError = fabs(interpolatedValue - trueValue);

        cout << "x = " << Xp
             << ", Interpolated sqrt(x) = " << interpolatedValue
             << ", True sqrt(x) = " << trueValue
             << ", Absolute Error = " << absoluteError << endl;
    }

    return 0;
}
