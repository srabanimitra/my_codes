#include <bits/stdc++.h>
using namespace std;

double horners(double a[], int n, double x)
{
    double p = a[0];
    for (int i = 1; i < n; i++)
    {
        p = p * x + a[i];
    }
    return p;
}
double deff(double a[], int n, double x)
{
    double res = 0;
    int j = 0;
    for (int i = n - 1; i > 0; i--)
    {
        res += a[j++] * i * pow(x, i - 1);
    }
    return res;
}
double NewtonRaphson(double a[], int n, double x0)
{
    double x, f1, f2;
    do
    {
        f1 = horners(a, n, x0);
        f2 = deff(a, n, x0);
        if (f2 == 0)
        {
            cout << "Mathematical error";
            break;
        }
        else{
            x=x0-f1/f2;
            x0=x;
        }
    }while(fabs(horners(a,n,x))>0.0001);
    return x;
}
void sign_rule(double a[],int n){
    int pos,neg;
    double res1,res;
    pos=0;neg=0;
    for(int i=0;i<n-1;i++){
        res=a[i]*a[i+1];
        res1=(pow(-1,n-(i+1))*a[i])*(pow(-1,n-(i+2))*a[i+1]);
        if(res<0){
            pos++;
        }
        if(res1<0){
            neg++;
        }
    }
    cout<<"sign pos number:"<<pos<<" "<<neg<<endl;
}

int main()
{
    double coeff[]={1,-3,2};
    double x0=2;
    int size=sizeof(coeff)/sizeof(coeff[0]);
    double res=NewtonRaphson(coeff,size,x0);
    cout<<res<<endl;
    sign_rule(coeff,size);
    return 0;
}