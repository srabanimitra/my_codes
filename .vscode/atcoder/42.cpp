
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //test case
    int t;
    cin >> t;
    for(int test=0;test<t;test++)
    {

    int i,n,sum=0;
    cin>>n;
    while(n!=0)
    {
        i=n%10;
        sum=sum+i;
        n=n/10;
    }
    cout<<"sum="<<sum<<endl;
    }

}
