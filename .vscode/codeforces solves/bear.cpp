
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a>>b;

    while(1){

        if(a>b)
        {
            break;
        }
        else{
            count++;
          a=a*3;
          b=b*2;
           }

    }
    cout<<count<<endl;
}
