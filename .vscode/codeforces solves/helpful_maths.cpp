#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();

    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l-1;j=j+2)
        {
            if(s[j]>s[j+2])
                swap(s[j],s[j+2]);
        }

    }
    cout<<s<<endl;

}
