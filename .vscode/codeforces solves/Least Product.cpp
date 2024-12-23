
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
         ll n,zero=0,neg=0;
        cin >> n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0) zero++;
            else if (a[i]<0) neg++;

        }
                if(zero!=0 || (neg%2==1)){
                  cout<<"0"<<endl;
                }else{
                 cout<<"1"<<endl;
                  cout<<"1"<<" "<<"0"<<endl;
                }


    }
    return 0;
}



