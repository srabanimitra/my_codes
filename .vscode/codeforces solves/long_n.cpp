
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,count=0;
    cin>>m;
    int a[m];
    for(int j=0; j<m; j++)
    {
        cin>>a[j];
    }
    sort(a,a+m);
    for(int j=0; j<m-1; j++)
    {
        if(a[j]<a[j+1])
        {
            count++;
        }
    }
   int d=m-count;
    cout<<d<<endl;
}
