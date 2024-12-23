
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,l,temp;
    l=s.size();
    for(i=0;i<l/2;i++)
    {
       temp=s[i];
       s[i]=s[l-1-i];
       s[l-1-i]=temp;
    }
    cout<<s<<endl;
}
