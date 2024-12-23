/A sec er set A er 1 no
#include <bits/stdc++.h>
using namespace std;

// Function for Linear Regression
void linearRegression(vector<double> x, vector<double> y, double predictWeight) {
    double sumX = 0, sumX2 = 0, sumY = 0, sumXY = 0;
    int n = x.size();

    // Summations for the formula
    for (int i = 0; i < n; i++) {
        sumX += x[i];//x er sum
        sumX2 += x[i] * x[i];//x^2 er sum
        sumY += y[i];//y er sum
        sumXY += x[i] * y[i];//xy er sum
    }

    // Calculating coefficients a and b for y = a + bx
    double b = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    double a = (sumY - b * sumX) / (double)n;

    // Print the equation of the line
    cout << "The linear regression line is: y = " << a << " + " << b << "x" << endl;

    // Predict the height for 159 lbs
    double predictedHeight = a + b * predictWeight;
    cout << "Predicted height for " << predictWeight << " lbs is: " << predictedHeight << " inches" << endl;

    // Calculate Mean Squared Error (MSE)
    double mse = 0;
    for (int i = 0; i < n; i++) {
        double y_pred = a + b * x[i];
        mse += (y[i] - y_pred) * (y[i] - y_pred);
    }
    mse /= n;
    cout << "Mean Squared Error (MSE): " << mse << endl;
}

int main() {
    // Input data: Weight (lbs) and Height (inches)
    vector<double> x = {140, 155, 212, 179, 192, 200};  // Weight in lbs
    vector<double> y = {60, 62, 75, 70, 71, 72};        // Height in inches

    // Predict height for 159 lbs
    double predictWeight = 159;

    // Perform Linear Regression and predict height
    linearRegression(x, y, predictWeight);

    return 0;
}

//A sec er set A er 2 no
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
//b part er poly
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

//b part er 1 no
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
