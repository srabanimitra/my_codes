#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int count=0;
        cin>>a >>b >>c;
        if(((a+b)==c)||((c+b)==a)||((a+c)==b))
        {
            count++;
        }
        if(count>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;

        }
    }

}
