#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int flag=1;
        for(int i=0;i<n-1;i++){


    if(s[i]>s[i+1]){
              flag=0;
               break;}
               else{
                flag=1;
               }


            }
            if(flag==1)
            cout<<"YES"<<endl
            ;
        else
             cout<<"NO"<<endl
            ;

            }



        }



