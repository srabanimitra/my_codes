#include<bits/stdc++.h>

using namespace std;


void gaussElimination(vector<vector<double>>& a, vector<double>& result, int degree)
{
    int n = degree + 1;
    for (int i = 0; i < n; ++i) {
        for (int k = i + 1; k < n; ++k) {
            if (abs(a[i][i]) < abs(a[k][i])) {
                for (int j = 0; j <= n; ++j) {
                    swap(a[i][j], a[k][j]);
                }
            }
        }

        for (int k = i + 1; k < n; ++k) {
            double factor = a[k][i] / a[i][i];
            for (int j = i; j <= n; ++j) {
                a[k][j] -= factor * a[i][j];
            }
        }
    }

    for (int i = n - 1; i >= 0; --i) {
        result[i] = a[i][n];
        for (int j = i + 1; j < n; ++j) {
            result[i] -= a[i][j] * result[j];
        }
        result[i] /= a[i][i];
    }
}

int main() {
    vector<double> weight = {140, 155, 212, 179, 192, 200};
    vector<double> height = {60, 62, 75, 70, 71, 72};
    int n = weight.size();

    int degree = 2;

    vector<vector<double>> A(degree + 1, vector<double>(degree + 2, 0.0));

    for (int i = 0; i <= degree; ++i) {
        for (int j = 0; j <= degree; ++j) {
            for (int k = 0; k < n; ++k) {
                A[i][j] += pow(weight[k], i + j);
            }
        }
        for (int k = 0; k < n; ++k) {
            A[i][degree + 1] += pow(weight[k], i) * height[k];
        }
    }

    vector<double> coeffs(degree + 1, 0.0);
    gaussElimination(A, coeffs, degree);

    cout << "The polynomial regression equation is: y = ";
    for (int i = degree; i >= 0; --i) {
        cout << coeffs[i] << " * x^" << i;
        if (i > 0) cout << " + ";
    }
    cout << endl;

    double x_predict = 159;
    double y_predict = 0;
    for (int i = 0; i <= degree; ++i) {
        y_predict += coeffs[i] * pow(x_predict, i);
    }
    cout << "Predicted height for 159 lbs: " << y_predict << " inches" << endl;


    double mse = 0;
    for (int i = 0; i < n; ++i) {
        double predicted_y = 0;
        for (int j = 0; j <= degree; ++j) {
            predicted_y += coeffs[j] * pow(weight[i], j);
        }
        mse += pow(predicted_y - height[i], 2);
    }
    mse /= n;
    cout << "Mean Squared Error (MSE): " << mse << endl;

    return 0;
}
