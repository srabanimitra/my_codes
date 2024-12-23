#include<bits/stdc++.h>
using namespace std;

double horners(double a[],int n,double x)
{
    double p=a[0];
    for(int i=1;i<n;i++)
    {
        p=p*x + a[i];
    }
    return p;
}

void secant(double a[],int n,double x0,double x1)
{
    double root;
    do{
        double f1=horners(a,n,x0);
        double f2=horners(a,n,x1);
        root=(x0*f2-x1*f1)/(f2-f1);
        x0=x1;
        x1=root;
    }while(fabs((root-x0))>0.001);
    cout<<root<<endl;
}

int main()
{
    double coeff[]= {2,0,-2,-5};
    double x0=1;
    double x1=2;
    int size=sizeof(coeff)/sizeof(coeff[0]);
    secant(coeff,size,x0,x1);
    return 0;
}

