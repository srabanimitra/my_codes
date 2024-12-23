
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    string s;
    map<string,int> a;
    for(int i=0; i<k; i++)
    {
        cin>>s;
        if(a[s]==0)
        {
            a[s]=1;
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<s<<a[s]<<endl;
            a[s]++;
        }

    }



}
