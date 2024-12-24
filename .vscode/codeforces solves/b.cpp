

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,s[1000],i,count=0,a,b,sum,flag;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>s[i];
}

for(i=0;i<n;i++)
{

    a=s[i]+s[i+1];
    b=s[i]*s[i+1];
    sum=a*b;

    for(int j=2;j<sum/2;j++)
	{
	    flag=0;
        if(sum%j==0)
        {
			flag=1;
          break;
        }

    }
	if(flag==0)
    {

    count++;
}
}
	cout<<count<<endl;
}
