
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin>>s;
        n=s.length();

            int i=1;
           while(s[i-1]!=s[i]&&i<n){
            i++;
           }
if(s[i-1]=='a'){
    s.insert(i,1,'b');
}
		else
        {s.insert(i,1,'a');
        }
		cout<<s<<endl;
    }
}

