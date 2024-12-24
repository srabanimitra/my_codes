#include<bits/stdc++.h>
using namespace std;

int main()
{
string a;
cin>>a;
int count=0;
int s=a.length();
sort(a,a+s);

for(int i=0;i<s;i++)
{
    for(int j=i+1;j<s-1;j++)
    {
        if(a[i]==a[j])
        {
            count++;
        }
    }
}
d=s-count;
if(d%2==0)
cout<<"CHAT WITH HER!"<<endl;

else
cout<<"IGNORE HIM!"<<endl;

}
