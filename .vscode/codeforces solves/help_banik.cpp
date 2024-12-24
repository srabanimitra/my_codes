#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main()
{
    int n,m,flag,prime;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==2)
        {
            prime++;
        }
       else if(a[i]==1)
        {
            prime=prime+0;
        }
        else{

        for(int j=2;j<a[i];j++)
          {
            if(a[i]%j!=0)
            {
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }

        }
        if(flag==1)
            prime++;
    }
    cout<<prime;
   // for(int i=0;i<n;i++)
    //{
      //  cin>>a[i];
    //}

}
