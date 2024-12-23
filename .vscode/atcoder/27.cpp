#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n,m;
    int i;
    cin>>n>>m;
    for(i=0;i<n.size();i++)
    {
        if(n[i]==m[i])
            cout<<"0";
        else
            cout<<"1";
    }

}
