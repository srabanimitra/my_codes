

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>s;
       int l=s.size();
       int count=0;
       for(int i=0;i<l;i++)
       {
           if(s[i]=='Y'||s[i]=='y')
            count++;
        if (s[i+1]=='E'||s[i+1]=='e')
           count++;
        if(s[i+2]=='S'||s[i+2]=='s')
            count++;
            if(count==3){
           cout<<"YES"<<endl;
           break;
            }
           else{
            cout<<"NO"<<endl;
            break;
           }
       }

      // if((s[1]=='y'||s[1]=='Y')&&(s[2]=='e'||s[2]=='E')&&(s[3]=='s'||s[3]=='S'))
      //  cout<<"YES"<<endl;
     //  else
       // cout<<"NO"<<endl;
    }
}
