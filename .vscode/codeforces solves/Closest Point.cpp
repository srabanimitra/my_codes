
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n,zero=0,neg=0;
        cin >> n;
        vector<ll>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        if(n>=3)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int  flag=1;

            for(int i=0; i<n; i++)
            {

                if((a[i+1]-a[i])==1){
                flag=0;
                }

            }
            if(flag==1)
            {
                cout<<"YES"<<endl;
            }
            else

                cout<<"NO"<<endl;
        }



    }
    return 0;
}




