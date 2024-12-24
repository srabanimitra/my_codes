#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }

        for(int k=0;k<n;k++)
        {
            int count=0;
            for(int m=0;m<n;m++){
            if(a[k]==a[m])
            {
             count++;
            }

            }
            if(count==1)
            cout<<(k+1)<<endl;

        }
    }
}
