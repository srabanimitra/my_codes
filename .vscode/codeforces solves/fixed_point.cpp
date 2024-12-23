#include<bits/stdc++.h>
using namespace std;

double f(double x)
{
    return (2*x*x*x)-(2*x)-5;
}
double g(double x)
{
    double res=cbrt((2*x+5)/2);
    return res;
}

void fixed_point(double x0)
{
    double root,prev;
    do{
        prev=x0;
        root=g(x0);
        x0=root;
    }while(fabs(root-prev)>0.0001);
    cout<<"final root is: "<<root<<endl;
}

int main()
{
    double x1=1;
    double x2=2;
    double x0=(x1+x2)/2;
    fixed_point(x0);
    return 0;
}
