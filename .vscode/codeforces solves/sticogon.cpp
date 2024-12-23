
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        map<int,int>m;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            m[i]++;}
            sort(a,a+n);

            if(m[i]>2){

                if(m[i]%3==0)
                sum=sum+m[i]/3;

            else if(m[i]%4==0)
               sum += m[i]/4;
            else if(m[i]%5==0)
                sum += m[i]/5;
            else if(m[i]%6==0)
                sum += m[i]/6;
            else if(m[i]%7==0)
               sum += m[i]/7;
            else if(m[i]%8==0)
                sum += m[i]/8;
            else if(m[i]%9==0)
               sum += m[i]/9;
            else if(m[i]%10==0)
                sum += m[i]/10;
            }

        }

        cout<<sum<<endl;

    }

}
