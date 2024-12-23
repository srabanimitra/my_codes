
#include<bits/stdc++.h>
using namespace std;


void calculateDividedDifference(vector<double>& x, vector<vector<double>>& y, int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            y[i][j] = (y[i - 1][j + 1] - y[i - 1][j]) / (x[j + i] - x[j]);//(Y[0][1]-Y[0][0])/(x[1]-x[0])
        }
    }
}


double newtonInterpolation(vector<double>& x, vector<vector<double>>& y, double xp, int n) {
    double yp = y[0][0];
    for (int i = 1; i < n; i++) {
        double product_of_x = 1;
        for (int j = 0; j < i; j++) {
            product_of_x *= (xp - x[j]);
        }
        yp += product_of_x * y[i][0];
    }
    return yp;
}

int main() {

    vector<double> x = {1.0, 1.5, 2.0, 3.0, 4.0};
    vector<double> true_sqrt_x = {sqrt(1.0), sqrt(1.5), sqrt(2.0), sqrt(3.0), sqrt(4.0)};  // True square roots

    int n = x.size();


    vector<vector<double>> y(n, vector<double>(n));


    for (int i = 0; i < n; i++) {
        y[0][i] = true_sqrt_x[i];
    }


    calculateDividedDifference(x, y, n);


    cout << "x      Interpolated sqrt(x)   True sqrt(x)   Absolute Error\n";
    cout << "----------------------------------------------------------\n";

    for (double xp = 2.50; xp <= 4.00; xp += 0.50) {
        double interpolated_value = newtonInterpolation(x, y, xp, n);
        double true_value = sqrt(xp);  // True square root value
        double absolute_error = abs(true_value - interpolated_value);

        // Print the results in a table format
        cout << fixed << setprecision(4) << xp << "       " << interpolated_value
             << "               " << true_value << "           " << absolute_error << endl;
    }

    return 0;
}
