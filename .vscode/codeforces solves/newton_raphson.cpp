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
double deff(double a[],int n,double x)
{
    double res=0;
    int j=0;
    for(int i=n-1;i>0;i--)
    {
        res+= a[j++]*i*pow(x,i-1);
    }
    return res;
}


double NewtonRaphson(double a[],int n,double x0)
{
    double x;
    double prev;
    do
    {
        prev=x0;
        double f1=horners(a,n,x0);
        double f2=deff(a,n,x0);
        x=x0-(f1/f2);
        x0=x;
    }while(horners(a,n,x)>0.0001);

    return x;

}
int main()
{
    double coeff[]= {2,0,-2,-5};
    double x0=2;
    int size=sizeof(coeff)/sizeof(coeff[0]);
    double result = NewtonRaphson(coeff,size,x0);
    cout<<result<<endl;
    return 0;
}
