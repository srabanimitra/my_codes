
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length();
int f=0,g=0;
    for(int i=1; i<=l; i++)
    {
        if(islower(s[i]))
        {
            f++;
        }
    }
        for(int i=0; i<=l; i++)
    {
        if(isupper(s[i]))
        {
            g++;
        }
    }

if(islower(s[0])&&f==0)
    {
    s[0]=toupper(s[0]);
    for(int i=1; i<l; i++)
    {
        s[i]=tolower(s[i]);
    }
        cout<<s;

}
else if(g==l)
{
   for(int i=0; i<l; i++)
    {
        s[i]=tolower(s[i]);
    }
    cout<<s;
}
else
    cout<<s;
}
