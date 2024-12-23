
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        for(int i=0;i<3;i++){
           cin>> a[i];
        }
        //cin >> a>>b >>c ;
sort(a,a+3);
       int c=a[1];

            cout<<abs(a[0]-a[1])+abs(a[1]-a[1])+abs(a[2]-a[1])<<endl;
        }
    }

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n ;

       // vector<int>a(n);
       map<int ,int>a;
        int sum=0;
        int mx=0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            a[x]++;
          //  sum += a[i];
        }

//sort(a.begin(), a.end(), greater<int>());
int flag=0;
        for ( auto &a1 : a) {
                  if(a1.second %2!=0)
                    flag=1;
        }

            if(flag==0)
            {
                cout<<"NO"<<endl;
            }
            else cout<<"yes"<<endl;
        }
    }



*/
