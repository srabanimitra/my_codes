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
        int n,flag=1;
        cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<ll int>());
        for(int i=0; i<n-1; i++)
        {
            if(a[i]==a[i+1]){
                flag=1;
                break;
            }
            if(a[i]!=b[i])
            {
                flag=0;

            }

        }
        if(n==1)
        cout<<"yes"<<endl;
      else  if(flag==0)
            cout<<"yes"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
