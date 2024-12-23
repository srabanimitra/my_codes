#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin >> n ;
    ll a[n];
    ll even=0,odd=0;


    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if(a[i]%2==0)
        {
            even++;
        }
        else odd++;


    }
    cout<<even<<odd<<endl;

    if(even==0 || odd==0)
        cout<<"0"<<endl;

    else if(even%2==1 && odd%2==1){
        if(even!=odd-1 || odd!=even-1){
            cout<<even<<endl;
        }
        else cout<<even+1<<endl;
    }

        // else if(even%2==1 && odd%2==1 && even)
       // cout<<even+1<<endl;

    else
        cout<<even<<endl;




//    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

