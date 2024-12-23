
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }


        for(int i=0; i<n; i++)
        {
            int n;
            cin>>n;
            string s;
            cin>>s;
            for(int J=0; J<s.size(); J++)
            {

                if(s[J]=='D')
                {
                    if(a[i]<9)
                    {
                        a[i]++;
                    }
                    else
                    {
                        a[i]=0;
                    }

                }
                else
                {
                    if(a[i]>0)
                    {
                        a[i]--;
                    }
                    else
                    {
                        a[i]=9;
                    }

                }

            }


        }
         for(int i=0; i<n; i++)
        {
           cout<<a[i]<<" ";
        }

 cout<<"\n";
    }

}
