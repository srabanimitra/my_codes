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
       ll int a,b,sum2=0;
        cin>>a >>b ;
        ll int n[a],m[a];
        for(int i=0;i<a;i++)
        {
            cin>>n[i];

        }
        sort(n,n+a);
        for(int i=0;i<a;i++)
        {
            cin>>m[i];

        }
        sort(m,m+a,greater<ll int>());

            for(int i=0;i<b;i++)   {
                if(n[i]<m[i]){
                    swap(n[i],m [i]);
                }
            }
            for(int i=0;i<a;i++)
        {

            sum2=sum2+n[i];
        }
           cout<<sum2<<endl;



    }
}

