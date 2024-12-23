
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
         int n,count=false;
        cin >> n ;
        string s;
        cin>>s ;

          if (s[0] != s[n-1]) {
               count = true;
            }



 if (count) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }



    }
}
