
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,a,b,c,j,k,l;
    cin>>a>>b>>c;
    i=(a+b)*c;
    j=a*(b+c);
    k=a*b*c;
    l=a+(b*c);
    if(i>j && i>k && i>l)
        cout<<i<<endl;
    else if(j>i && j>k && j>l)
        cout<<j<<endl;
    else if(k>i && k>j && k>l)
        cout<<k<<endl;
        else
            cout<<l<<endl;
}
