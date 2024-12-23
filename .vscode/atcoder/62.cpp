
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,h;

        cin>>m>>h;
        if(m==0)
        cout<<1440-h<<endl;
       else if(m==23)
        cout<<60-h<<endl;
        else
        cout<<(24-m)*60-(h)<<endl;


    }

}
