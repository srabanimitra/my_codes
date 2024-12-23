#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;

   long long int app[n];
    long long int apart[m];

    for(long long int i=0;i<n;i++)
    {
        cin>>app[i];
    }

    for(long long int i=0;i<m;i++)
    {
        cin>>apart[i];
    }

  long long int count=0;
   long long int i=0,j=0;

    while(i<n&&j<m)
        {
        if((app[i]-apart[j])<=k)
        {
            count++;
            i++;
            j++;
        }
        else if (app[i]<apart[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    cout <<count<< endl;

    return 0;
}
//
