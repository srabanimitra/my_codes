
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp;
    cin>>n;
    int s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }

    for(int i=0; i<n; i++)
    {

        for(int j=0; j<n-1; j++)
        {
            if(s[j]>s[j+1])
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {

        cout<<s[i]<<" ";
    }
}
