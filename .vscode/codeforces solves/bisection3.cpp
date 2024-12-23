
#include<bits/stdc++.h>
using namespace std;

double f(double w) {
    return pow(w, 4) - 1600 * w * w + 466489;
}


double falsePosition(double a, double b, double epsilon) {
    double c;
    int iteration = 0;
    double previous_root = 0.0;

    cout << "Number of Iteration\tLower Limit\tUpper Limit\tRoot\tChange in Root" << endl;

    do {
        iteration++;
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));

        if (f(c) == 0.0)
            break;
        else if (f(c) * f(a) < 0)
            b = c;
        else
            a = c;

        if (iteration > 1) {
            double change = abs(c - previous_root);
            cout << iteration << "\t\t\t" << a << "\t\t" << b << "\t\t" << c << "\t" << change << endl;
            if (change < epsilon)
                break;
        } else {
            cout << iteration << "\t\t\t" << a << "\t\t" << b << "\t\t" << c << endl;
        }

        previous_root = c;
    } while (fabs(f(c)) > epsilon);

    return c;
}

int main() {
    double a = 19;
    double b = 20;
    double epsilon = 0.0001;

    double root = falsePosition(a, b, epsilon);

    cout << "\nApproximate width of the television screen: " << root << " inches" << endl;

    return 0;
}
