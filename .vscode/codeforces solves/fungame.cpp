
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
         ll n,count1=0,count0=1;
        cin >> n;
        string a,b;
        cin>>a >>b;
        for(int i=0;i<n;i++){
                if(a[i]=='1'){
                    count1++;
                }
               if((a[i]!=b[i])&& count1==0){
                    count0=0;
                }

                }

     if(count0!=0)

        cout<<"YES"<<endl;
        else
             cout<<"NO"<<endl;
    }
    return 0;
}


