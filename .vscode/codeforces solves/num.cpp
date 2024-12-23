#include <bits/stdc++.h>
using namespace std;
double f(vector<double> &a, double x)
{
    double res = 0;
    for (int i = 0; i < a.size(); i++)
    {
        res = res * x + a[i];
    }
    return res;
}
double df(vector<double> &a, double x)
{
    double res = 0;
    int n = a.size()-1;
    for (int i = 0; i < a.size() - 1; i++)
    {
        res = res * x + a[i] * (n - i);
    }
    return res;
}
int main()
{
    double n, x0,x1;
    cin >> n >> x0;
    vector<double> a;
    for (int i = 0; i <= n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    while(a.size()-1>0){
    while(1)
    {

        x1=x0-(f(a,x0)/df(a,x0));
        if((fabs(x1-x0)/x1)<0.0005)
        break;
       x0=x1;

    }
    cout<<x1<<" ";
    vector<double>temp;
    temp.push_back(a[0]);
    for(int i=1;i<a.size()-1;i++)
    {
        double t=temp[i-1]*x1+a[i];
        temp.push_back(t);
    }
    a.clear();
    a=temp;
    }
}
/*
#include <bits/stdc++.h>
using namespace std;

// Function to evaluate the polynomial using Horner's method
double hons(const vector<double>& v, double x) {
    double p = v[0];
    for (int i = 1; i < (int)v.size(); i++) {
        p = p * x + v[i];
    }
    return p;
}

// Function to evaluate the derivative of the polynomial
double derivative(const vector<double>& v, double x) {
    double result = 0;
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        result += v[i] * (n - 1 - i) * pow(x, (n - 2 - i));
    }
    return result;
}

// Function to perform polynomial deflation
vector<double> deflation(const vector<double>& v, double root) {
    int n = v.size();
    vector<double> a(n - 1);
    a[0] = v[0];
    for (int i = 1; i < n - 1; i++) {
        a[i] = v[i] + a[i - 1] * root;
    }
    return a;
}

int main() {
    vector<double> v = {1, -6, 11, -6};  // Coefficients of the polynomial: x^3 - 6x^2 + 11x - 6
    double tolerance = 0.001;
    double x = 1.0;  // Initial guess
    int rn = 0;     // Root number
    int it = 0;     // Iteration count
    int n = v.size();

    while (n > 1) {
        double e;
        do {
            it++;
            double f1 = hons(v, x);
            double f2 = derivative(v, x);
            double x1 = x - f1 / f2;
            e = fabs(x1 - x);
            x = x1;
        } while (e > tolerance);
        rn++;

        cout << "Iteration: " << it << " Root-" << rn << ": " << x << endl;

        v = deflation(v, x);
        n = v.size();
    }

    // For the final root
    if (n == 1) {
        rn++;
        cout << "Iteration: " << it << " Final Root-" << rn << ": " << -v[1] / v[0] << endl;
    }

    return 0;
}
*/
