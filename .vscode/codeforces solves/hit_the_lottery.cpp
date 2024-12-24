#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    while(n!=0)
    {
        if(n>=100)
        {
            count++;
            n=n-100;
        }
       else if(n>=20)
        {
            count++;
            n=n-20;

        }
        else if(n>=10 )
        {
            count++;
            n=n-10;

        }
        else if(n>=5 )
        {
            count++;
            n=n-5;

        }
        else
        {
            count++;
            n=n-1;
        }

    }
    cout<<count<<endl;

}


