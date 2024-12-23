#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)

                if( (i>j) && s[i]==s[j])
                {
                    count++;
                }

            if(count!=0)
            {
                cout<<"YES"<<endl;
            }
            else{
            cout<<"NO"<<endl;
            }
        }
}
