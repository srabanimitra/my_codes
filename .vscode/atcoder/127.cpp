#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,m,b=0;
 cin>>n >>m;
 string c[m];
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>c[j];
        if(c[j]=="C" || c[j]=="M" ||c[j]=="Y"){
            b++;
        }
    }
   }
   if(b==0)
        cout<<"#Black&White"<<endl;
   if(b!=0)
        cout<<"#Color"<<endl;
}
