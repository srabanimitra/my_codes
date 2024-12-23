
#include<bits/stdc++.h>
using namespace std;
int main()
{
int g,s,c;
cin>>g>>s>>c;
int sum=g*3+s*2+c*1;
if(sum>=8)
{
 cout<<"Province"<<" "<<"or"<<" ";
}
else if(sum>=5 && sum<=7)
{
 cout<<"Duchy"<<" "<<"or"<<" ";
}
else if(sum>=2 && sum<=4)
{
 cout<<"Estate"<<" "<<"or"<<" ";
}

if(sum>=6)
{
 cout<<"Gold"<<" ";
}
else if(sum>=3 && sum<6)
{
 cout<<"Silver"<<" ";
}
else if(sum>=0 && sum<3)
{
 cout<<"Copper"<<" ";
}

}
