
#include<bits/stdc++.h>
using namespace std;

int main()
{
string a;
cin>>a;
sort(a.begin(),a.end());
int count=0;
int s=a.size(),d;
for(int i=0;i<s;i++)
{
    if(a[i]!=a[i+1])
        {
            count++;
        }
    }
d=count;
if(d%2==0)
cout<<"CHAT WITH HER!"<<endl;
else
cout<<"IGNORE HIM!"<<endl;

}
