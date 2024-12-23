/*#include<bits/stdc++.h>
using namespace std;
double f(double w)
{
    return pow(w,4)-1600*w*w+466489;
}
double pos(double a, double b, double e)
{
    double c;
    double preroot=0.00;
    int it=0;
    cout << "Number of Iteration\tLower Limit\tUpper Limit\tRoot\tChange in Root" << endl;
    do
    {
        it++;
       c=f(a)-f(a)*(a-b)/  f(a)-f(b);
       //c = (a * f(b) - b * f(a)) / (f(b) - f(a));
        if(c==0)
            break;
        else if(f(c)*f(b)<e)
            c=a;
        else
            b=a;
        if(it>1)
        {
            double change = abs(c - preroot);
            cout << it << "\t\t\t" << a << "\t\t" << b << "\t\t" << c << "\t" << change << endl;
            if (change < e)
                break;
        }
        else
        {
            cout << it << "\t\t\t" << a << "\t\t" << b << "\t\t" << c << endl;
        }
        preroot=c;



    }while (fabs(f(c)) > e);
    return c;
}
int main()
{
    double a=19,b=20,e=0.0001;
    double root = pos(a, b, e);
    cout << "\nApproximate width of the television screen: " << root << " inches" << endl;

    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;

double f(double w) {
    return pow(w, 4) - 1600 * w * w + 466489;
}

double pos(double a, double b, double e) {
    double c;
    double preroot = 0.00;
    int it = 0;
    cout << "Number of Iteration\tLower Limit\tUpper Limit\tRoot\tChange in Root" << endl;
    do {
        it++;
        c = a - (f(a) * (b - a)) / (f(b) - f(a));
        if (c == 0)
            break;
        else if (fabs(f(c)) < e)
            break;
        else if (f(c) * f(b) < 0)
            a = c;
        else
            b = c;
        if (it > 1) {
            double change = abs(c - preroot);
            cout << it << "\t\t\t" << a << "\t\t" << b << "\t\t" << c << "\t" << change << endl;
            if (change < e)
                break;
        }
        else {
            cout << it << "\t\t\t" << a << "\t\t" << b << "\t\t" << c << endl;
        }
        preroot = c;
    } while (fabs(f(c)) > e);
    return c;
}

int main() {
    double a = 19, b = 20, e = 0.0001;
    double root = pos(a, b, e);
    cout << "\nApproximate width of the television screen: " << root << " inches" << endl;

    return 0;
}

