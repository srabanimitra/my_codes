#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a,b,c,v=0;
        cin>>a >>b >>c;
        if(a+b>=10){
            v++;

        }
       else if(a+c>=10){
            v++;

        }
        else if(b+c>=10) {
            v++;
        }
        if(v!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    }
