
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
         ll n,count1=0,count0=0;
        cin >> n;
        string a;
        cin>>a;
        for(int i=0;i<n;i++){
                if(a[i]=='1'){
                    count1++;
                }
                else if(i==0){
                    count0++;
                }

                 else if(a[i]!=a[i-1]){
                  count0++;
                }
                }

     if(count1>count0)

        cout<<"YES"<<endl;
        if(count0>=count1)
             cout<<"NO"<<endl;
    }
    return 0;
}

