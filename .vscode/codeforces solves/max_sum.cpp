#include<iostream>

using namespace std;

const int maxn = 200010;
int d[maxn];
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
while (t--) {

    int n;
        cin >> n;
//vector<int>d;
    for (int i = 1; i < maxn; ++i)
    {
        int s = 0;
        int x = i;
        while (x > 0)
        {
            s += x % 10;
            x /= 10;
        }

        d[i] = d[i - 1] + s;
    }

   // while (t--)
  //  {

     //   int n;
    //    cin >> n;
        cout << d[n] << endl;
    }



}
