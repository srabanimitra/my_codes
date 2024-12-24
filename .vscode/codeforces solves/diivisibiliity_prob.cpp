
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b;
    cin>>n;
for(int i=0;i<n;i++)
{
    int count=0;
 cin>>a>>b;
 if(a%b==0)
 cout<<"0"<<endl;
 else
    cout<<b-(a%b)<<endl;
}

}
