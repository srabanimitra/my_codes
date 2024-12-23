#include<iostream>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {

        int n,one=0,o=0;
        cin >> n;
        string s;
        for(int i=1; i<=n; i++)
        {
            cin>>s;
            one=0;
            for(int j=0; j<s.size(); j++)
            {
                if(s[j]=='1')
                {
                    one++;
                }
            }
            if(one==1) o++;
        }



        if(o>0)
            cout<<"TRIANGLE"<<endl;


        else
            cout<<"SQUARE"<<endl;

    }

}



