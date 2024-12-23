
#include <iostream>
#include <cmath>

using namespace std;

double position(double t) {
    return t*t*t*t*t + 14*t*t*t*t - 5*t + 10;
}

double velocity(double t) {
    return t*t*t*t -1600*t*t+466489;
}

double findTimeAtRest(double a, double b, double epsilon) {
    double c;
    double fa, fb, fc;
    int iteration = 0;

    do {
        fa = velocity(a);
        fb = velocity(b);

        c = b - fb * (b - a) / (fb - fa);
        fc = velocity(c);

        cout << iteration << "\t\t" << a << "\t\t" << b << "\t\t" << c << "\t\t" << fabs(b - a) << endl;

        if (fa * fc < 0)
            b = c;
        else
            a = c;

        iteration++;
    } while (fabs(b - a) > epsilon && fabs(fc) > epsilon);

    return c;
}

int main() {
    double a = 19;
    double b = 20;
    double epsilon = 0.0001;

    cout << "Iteration\t tLower Limit\t tUpper Limit\t tRoot\t tLimit Change" << endl;

    double timeAtRest = findTimeAtRest(a, b, epsilon);

    cout << "Time when velocity is zero: " << timeAtRest << " seconds" << endl;

    return 0;
}


