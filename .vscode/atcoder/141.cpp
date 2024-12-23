#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n >>m;
        string x,s;
        cin>>x >>s;

        int flag=0;
        for(int i=0; i<=6; i++)
        {
            if(x.find(s) != -1)
            {

                flag=1;
                cout<< i <<"\n";
                break;
            }

            x += x;

        }

        if(flag==0)
            cout<<-1<<"\n";


    }
}
