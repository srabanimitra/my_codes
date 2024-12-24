#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        char c;
        string s;
        for(int j=0; j<8; j++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>c;
                if(c!='.')
                {
                    s += c;
                }

            }

        }
        cout<<s<<endl;
    }
}
