#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
         int n,k;
        cin >> n>>k;
 int count=ceil((double)(n-1)/(k-1));



        cout<<count<<endl;
    }
    return 0;
}
