#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        int l=s.size();
        int sum=0,sum1=0;

        for(int i=0; i<3; i++)
        {
            sum=sum+s[i];
        }
        for(int i=l-1; i>l-4; i--)
        {
            sum1=sum1+s[i];
        }
        if(sum==sum1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
