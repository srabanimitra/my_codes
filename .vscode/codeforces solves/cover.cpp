
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     string s;
     cin>>s;
     int count=0;
     bool flag=false;
     int ans=2;
        for(int i=0;i<n;i++){

                if(s[i]=='.' && i+2 <n && s[i+1]=='.' && s[i+2]=='.')
                    {
                        flag=true;
                    }
                   if(s[i]=='.'){
                count++;
                }
        }
        if(!flag) ans=count;
            cout<< ans <<endl;
    }
}
