
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,f=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int count=0;
                cin>>a >>b >>c ;
        if(a==0)
        {
            count++;
        }
        if(b==0)
        {
            count++;
        }
        if(c==0)
        {
            count++;
        }
        if(count<2)
        {
            f++;
        }
    }

    cout<<f<<endl;

}

