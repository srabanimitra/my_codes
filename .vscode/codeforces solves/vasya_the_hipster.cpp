
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a>>b;
    while(a!=0 && b!=0)
    {
        count++;
        a--;
        b--;
    }

    int x=a+b;
    cout<<count<<" "<<x/2<<endl;

}
