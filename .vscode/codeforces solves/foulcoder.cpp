#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<(n*2+1); i++)
    {
        for(int j=(n*2); j>i; j--)
        {
            cout<<" ";
        }
        if(i==0 || (i==n) || (i==n*2))
        {
            for(int i=0; i<(n*2+1); i++)
            {
                cout<<"*";
            }

        }
        else
        {
            for(int i=0; i<(n*2+1); i++)
            {

                if(i==0 || i==n || i==n*2)
                {
                    cout<<"*";

                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<"\n";
    }

}


