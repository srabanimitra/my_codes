#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{

    int n, c, d;
    cin >> n >> c >> d;
    int n1=n*n;
    int mini=INT_MAX;
    map<int,int>m;
    for(int i=0; i<n1; i++)
    {
        int a;
            cin>>a;
        mini=min(mini,a);
        m[a]++;
    }
    int f=mini,row;

    for(int i=0; i<n; i++)
    {
        f=mini+i*c;
        row=f;

        if(!m[row])
        {
            cout<<"NO"<<endl;
            //  break;
            return;
        }

        for(int j=0; j<n; j++)
        {
            row=f+j*d;
            if(!m[row])
            {
                cout<<"NO"<<endl;
                //break;
                return;
            }
            m[row]--;
        }

    }
    cout<<"YES"<<endl;


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}


