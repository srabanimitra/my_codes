#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

        ll n;
        cin >> n;

        vector<int>a(n);
        vector<int>b(n);
       stack<int>s;
     //  b.push_back(0);


            for (int i = 0; i <n; i++)
            {
        cin>>a[i];

        while(!s.empty()&& a[s.top()]>=a[i]){
            s.pop();
        }
        if (s.empty()){
            b[i]=0;
        }
        else{
            b[i]=s.top()+1;
        }
        s.push(i);

            }
           for (int i = 0; i <n; i++)
            {
                 cout<<b[i]<<" ";
        }

}
