
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,a1 =0,flag=1,b1=0;
        cin>>n;

        int a[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }


        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(a[i][j]=="1")
                    a1++;

            }
            cout<<a1<<endl;
            if(a1%2==0)
            {
                //flag=1;
                cout<<"SQUARE"<<endl;
                break;
            }
            else if(a1%2!=0)
            {
                for(int j=0; j<n; j++)
                {
                    if(a[i+1][j]=='1')
                        b1++;

                }
                if(a1==b1)
                {
                   // flag=1;
                    cout<<"SQUARE"<<endl;
                    break;
                }
                else
                {
                  //  flag=0;
                      cout<<"TRIANGLE"<<endl;
                    break;
                }

            }



        }
}
    }

 // if( flag==0)
      //    cout<<"TRIANGLE"<<endl;
     // else
       //   cout<<"SQUARE"<<endl;









