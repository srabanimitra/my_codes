#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;

    int n;
    cin >> n;

    int a[t][n];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int sum = 0, one = 0,flag=0;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            flag=0;
            if (a[i][j] == 2)
            {
                if (i - 1 >= 0 && a[i - 1][j] == 1)
                {
                    a[i - 1][j] = 2;
                    flag=1;

                }
                if (i + 1 < t && a[i + 1][j] == 1)
                {
                    a[i + 1][j] = 2;
                    flag=1;

                }
                if (j - 1 >= 0 && a[i][j - 1] == 1)
                {
                    a[i][j - 1] = 2;
                    flag=1;
                }
                if (j + 1 < n && a[i][j + 1] == 1)
                {
                    a[i][j + 1] = 2;
                    flag=1;

                }
            }
            if(flag==1)
                sum=sum+1;
        }
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
                one++;
        }
    }

    if (one > 0)
        cout << "-1"<< endl;
    else
        cout << sum << endl;
}

