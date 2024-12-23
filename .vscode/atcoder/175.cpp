#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    int l= s.length();
    sort(s.begin(),s.end());
    int count=0;

    for(int i=0; i<l-1; i++)
    {
        if(s[i]=='{}'||s[i]==','||s[i]==' ')
        {
            continue;
        }
        else
        {

            if(s[i]!=s[i+1])
            {
                count++;

            }


        }

    }

    cout<<count-1;


}
