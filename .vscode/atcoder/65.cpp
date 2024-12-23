/*
//#include<bits/stdc++.h>
//using namespace std;
//int main()
{
    int n,j;
    cin>>n;

    int a[n];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    for(int i=1; i<=n; i++)
    {

        int flag=0;
        for(int j=i-1; j>=1; j--)
        {

            if(a[j]<a[i])
            {
                flag=j;

                break;
            }
        }
        cout<<flag<<" ";


    }



}*/
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll n;
    cin>>n;

    vector<ll>a(n);
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(ll i=1;i<=n;i++) {
      ll near=0;
        for(ll j=i-1;j>=1;j--)
         {
            if(a[j]<a[i]){
                near=j;
                break;
            }
        }
        cout<<near<<" ";
    }
return 0;
}

