#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        string s, t;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else if(s[i]=='?')
            {
                s[i]=t[j];
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        if (i>=n && j<m)
        {
            cout << "NO" << endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(s[i]=='?')s[i]='a';
            }
            cout << "YES\n";
            cout<<s<<endl;
        }


    }
}


