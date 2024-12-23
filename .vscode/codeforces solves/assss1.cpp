#include <bits/stdc++.h>
using namespace std;


const double A = 12612.621;
const double B = 1.87e-3;
const double R = 518.0;
const double T = 223.15;
const double P = 65000000;

double functionF(double x) {
    double term1 = (R * T) / (x - B);
    double term2 = A / (x * (x + B) * sqrt(T));
    return P - term1 + term2;
}

double functionDF(double x) {
    double term1 = (R * T) / pow((x - B), 2);
    double term2 = (A * (2 * x + B)) / (sqrt(T) * pow((x * x + B * x), 2));
    return term1 - term2;
}

int main() {
    double ig = 1.78e-3;
    double newX;
    int iteration = 0;

    cout << setw(10) << "Iteration"
         << setw(15) << "v0"
         << setw(15) << "v1"
         << setw(15) << "f(v)"
         << setw(15) << "df(v)"
         << setw(15) << "Error" << endl;

    while (true) {
        newX = ig - (functionF(ig) / functionDF(ig));
        cout << setw(10) << iteration
             << setw(15) << ig
             << setw(15) << newX
             << setw(15) << functionF(ig)
             << setw(15) << functionDF(ig)
             << setw(15) << fabs((newX - ig) / newX) << endl;

        if (fabs((newX - ig) / newX) < 0.001) {
            break;
        }
        ig = newX;
        iteration++;
    }
cout<<endl;
    cout << "The value of v: " << newX << endl;
    cout << "Mass: " << 3 / newX << endl;

    return 0;
}
