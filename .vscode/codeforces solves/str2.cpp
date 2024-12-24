#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 cin>>s;
 for(int i=0;s[i]!='\o';i++)
    {
        if(s[i]>='a'&&s [i]<='z'  ||s[i]>='A' && s[i]<='Z' )
        {
            s[i]=s[i+1];
        }

    }

    cout<<s;

}
