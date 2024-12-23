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
        cin >> n;

        string s;
        cin>>s;
        int x,x1;

        if(n==1)
        {
            if(s[0]=='a')
                cout<<"w"<<s<<endl;
            else
                cout<<"a"<<s<<endl;

        }
        else
        {
            for (int i = 0; i < n; i++)
            {

                if(s[i]==s[i+1])
                {
                    x=i;
                    x1=i+1;
                    break;
                }

            }
            s[x1]=s[x]+1;
            for (int i = 0; i <= x; i++)
            {

                cout<<s[i];
            }
            for (int i = x1; i <= n+1; i++)
            {
                cout<<s[i];
            }
        }


        cout<<endl;
    }
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
   int n,k;
    cin >> n >> k;

    vector<int>a(k);
   long long int sum=0;

    for (int i = 0; i < k; i++) {
     cin>>a[i];
          }

  sort(a.begin(),a.end());

      for (int i = 0; i < k-1; i++) {
     if(a[i]!=1){
        sum += a[i]+a[i]-1;
     }
else {
    sum++;
}
     }

     cout<<sum<<endl;
          }

  return 0;
}
*/
