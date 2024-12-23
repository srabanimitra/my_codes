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
         int n,k,count=1;
        cin >> n >>k;
        int a1=n-1;
        int a2=n;
        int x=2;
   if(k==0 || n==0){
    cout<<"0"<<endl;

   }


     else
        {
          while(a2<k){
            x--;
           a2=a2+a1;
           if(x==0){
            x=2;
            a1--;
           }
           count++;

          }
          cout<<count<<endl;
        }




    }
    return 0;
}




