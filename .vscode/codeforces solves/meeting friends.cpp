
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,max,min,d;
    cin>>a>>b>>c;
    if(a>b&&a>c)
        max=a;
    else if(b>a && b>c)
        max=b;
    else
        max=c;
    if(a<b&&a<c)
        min=a;
    else if(b<a && b<c)
        min=b;
    else
        min=c;
        d=max-min;

    cout<<d<<endl;

}
