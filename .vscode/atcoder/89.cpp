#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(int i=0; i<n; i++)
    {
        int count=0,n=0;
        for(int j=1; j<n; j++)
        {

           if((i>=j)&&s[i]==s[j])
            {
                flag=1;
                count++;
                cout<<s[i]<<count<<endl;
            }

        }
       if(flag==0)
       cout<<"OK"<<endl;

    }

}
