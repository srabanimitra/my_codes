#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,x;
        cin>>n >>x;
        if(n<=2)
        {
            cout<<"1"<<endl;
        }
        else
        {
            n=n-2;
            double d=(1.0*n/x)+1;

            cout<< ceil(d) <<endl;//round
        }

    }

}
