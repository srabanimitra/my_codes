#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,d=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            c++;
        }
        else{
            d++;
    }

    }
       if(d==c)
    {
        for(int i=0;i<s.size();i++)
           {
               if(isupper(s[i]))
                s[i]=s[i]+32;
           }
           cout<<s<<endl;
    }

     else if(d>c)
    {
        for(int i=0;i<s.size();i++)
           {
               if(isupper(s[i]))
                s[i]=s[i]+32;
           }
           cout<<s<<endl;
    }
    else
    {
        for(int i=0;i<s.size();i++)
           {
               if(islower(s[i]))
                s[i]=s[i]-32;
           }
           cout<<s<<endl;
    }


}
