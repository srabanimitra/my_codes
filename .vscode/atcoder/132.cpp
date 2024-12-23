

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    int count=0;
    cin>>n;
    char s[n];
    cin>>s;
    for(int i=0; i<n; i++)
    {
        //count=0;
        if(s[i]>='A'&& s[i]<='Z'|| s[i]>='a' && s[i]<='z')
        {
            count++;
        }

    }
if(count>=26)
    cout<<"yes"<<endl;
else
    cout<<"no"<<endl;
     //if(count!=26)
       // {
       //     flag=1;
       // }

    //if(flag==1)
      //  cout<<"NO"<<endl;
   // if(flag==0)
  //      cout<<"YES"<<endl;


}
