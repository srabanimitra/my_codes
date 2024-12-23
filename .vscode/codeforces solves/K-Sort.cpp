#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
int t;
cin>>t;
while(t--)
{

        ll n,sum=0;
        cin >> n;
int max1=0,max2=0;
        vector<int>a(n);
     for (int i = 0; i <n; i++)
            {
        cin>>a[i];
        sum +=max(0,max2-a[i]);
        max1=max(max1,max2-a[i]);
        max2=max(max2,a[i]);
        }
        cout<<sum+max1<<endl;
}
}

