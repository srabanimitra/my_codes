
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a >>b;
        char c=a[0];
        char c1=b[0];
        cout<<c1;
        for(int i=1;i<3;i++){

            cout<<a[i];
        }
        cout<<" ";
         cout<<c;
        for(int i=1;i<3;i++){

            cout<<b[i];
        }
        cout<<endl;
    }

}
