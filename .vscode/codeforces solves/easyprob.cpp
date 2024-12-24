#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,flag=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
      int s;
      cin>>s;
      if(s==1)
      {
          flag=0;
          break;
      }
    }
    if(flag==0)
        cout<<"HARD"<<endl;
    else

            cout<<"EASY"<<endl;
}

