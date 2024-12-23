#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int cnt=0;
        if(n==2){
            cout<<"1"<<endl;
        }
       else  if(n==0){
            cout<<"0"<<endl;
        }
      else  if(n>=4){
            if(n%4==0){
                cout<<n/4<<endl;
            }
            else
            {
              cout<<(n/4)+1<<endl;
            }

        }



    }
}
