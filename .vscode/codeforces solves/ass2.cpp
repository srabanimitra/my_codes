#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double r = 518.00, t = 223.15, p = 65000000;
double a = 0.427 * pow(r, 2) * pow(191, 2.5) / 4580000;
double b = 0.0866 * r * 191 / 4580000;

double f(double x) {
    double t1 = (r * t) / (x - b);
    double t2 = a / (x * (x + b) * sqrt(t));
    return p - t1 + t2;
}

int main() {
    double x1 = 0.001, x2 = 0.002, x3;
    int i = 0;

    cout << setw(10) << "Iteration"
         << setw(15) << "v1"
         << setw(15) << "v2"
         << setw(15) << "v3"
         << setw(15) << "f1(v1)"
         << setw(15) << "f2(v2)"
         << setw(15) << "Error" << endl;

    while (true) {
        double f1 = f(x1), f2 = f(x2);
        x3 = x1 - f1 * (x2 - x1) / (f2 - f1);

        cout << setw(10) << i
             << setw(15) << x1
             << setw(15) << x2
             << setw(15) << x3
             << setw(15) << f1
             << setw(15) << f2
             << setw(15) << fabs((x3 - x2) / x3) << endl;

        if (fabs((x3 - x2) / x3) < 0.001)
            break;

        x1 = x2;
        x2 = x3;
        i++;
    }
cout<<endl;
    cout << "The value of v: " << x3 << endl;
    cout << "Mass: " << 3 / x3 << endl;

    return 0;
}
