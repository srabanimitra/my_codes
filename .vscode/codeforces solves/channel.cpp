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
       ll int n,a,c;
        cin>>n >>a  >>c;
                ll int p=a,q=a;

        string s;
        cin>>s;
        for(int i=0;i<c;i++){
            if(s[i]=='+')
                a++,q++;

            else
                a--;

        p=max(p,a);
        }
        if(p==n)
            cout<<"YES"<<"\n";
        else if(q>=n)
            cout<<"MAYBE"<<"\n";


        else
            cout<<"NO"<<"\n";


    }
}

