
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i;

    cin>>T;
    for(i=1;i<=T;i++)
    {
        int n,b=0;

        cin>>n;
        string s;
        cin>>s;

     for(int j=0;j<n;j++){
		if(s[j]=='0')
            {
                b++;
            }

     }
     n=double(n);

     if(b>(25*n)/100)
    {
        cout<<"Bad"<<endl;
    }
    else
    {
    cout<<"Good"<<endl;
    }



    }

}
