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
        int n,m,c,a=0;
        cin>>n >>m >>c;

        if(n==m)
        {
            cout<<"0"<<"\n";

        }
        else if(n>m)
        {
           while(n>m)
            {
                n -= c;
                m += c;
                a++;
          if(n<=m)
            {
                cout<<a<<"\n";
                break;
           }

            }


        }
        else if(m>n)
        {
           while (m>n)
            {
                m -= c;
                n += c;
                a++;
            if(m<=n)
            {
                cout<<a<<"\n";
                break;
            }
            }


        }



    }
}


