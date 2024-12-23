
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,k,sum=1;
        cin>>n >>m >>k;
        string s;
        cin>>s;
        ll jump=m,freeze=k;
        bool  istrue=true;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='C')
            {
                if(jump>0)
                {
                    jump--;
                }
                if(jump==0)
                {
                    istrue=false;
                    break;
                }
            }
            if(s[i]=='L')
            {
                jump=m;
            }
            if(s[i]=='W')
            {
                if(jump>0)
                {
                    jump--;
                }
             if(jump==0)
                {

                    freeze--;
                    if(freeze<0)
                    {
                        istrue=false;
                        break;
                    }
                    while(i<n && freeze>0)
                    {
                        i++;
                        if(s[i]=='L')
                        {
                            jump=m;
                            break;
                        }
                        else  if(s[i]=='W')
                        {
                            freeze--;

                        }
                        else  if(s[i]=='C')
                        {
                            istrue=false;
                            break;
                        }

                        if(i<n-1 && s[i+1]=='W' && freeze==0)
                        {
                            istrue=false;
                            break;
                        }
                    }
                }
            }

            if(istrue==false)
            {
                break;
            }

        }
        if (istrue == false)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}


