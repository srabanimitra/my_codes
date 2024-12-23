#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string rev=string(s.rbegin(),s.rend());
        if(s<=rev){
            cout<<s<<endl;
        }
        else{
            cout<<rev<<s<<endl;
        }
   //    s=min(s,string(s.rbegin(),s.rend())+s);
     //  cout<<s<<endl;
    }
}
