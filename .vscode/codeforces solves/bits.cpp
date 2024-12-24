#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin >> n;
    while(n!=0)
    {
        string s;
        cin >> s;

        if(s[1]=='+' && s[2]=='+')
        ans++;
        else if(s[1]=='-' && s[2]=='-')
        ans--;

        else if(s[0]=='+' && s[1]=='+')
        ans++;

        else
        ans--;
        n--;
    }
    cout <<ans<<endl;
}
