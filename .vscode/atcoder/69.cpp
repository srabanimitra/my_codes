#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,p=0,q=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            /*   cin>>b[i];
               if(a[i]>b[i])
               {
                   p++;
               }
               if(b[i]>a[i]){
                   q++;
               }
               if(a[i]==b[i]){
                   p++;
                   q++;
               }*/

        }

        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]>b[i])
            {
                p++;
            }
            if(b[i]>a[i])
            {
                q++;
            }
            if(a[i]==b[i])
            {
                p++;
                q++;


            }

}

            if(p>q)
                cout<<"Addy"<<endl;
             if(p<q)
                cout<<"Om"<<endl;
             if (p==q)
                cout<<"Draw"<<endl;


        }

    }
