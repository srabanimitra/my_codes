#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]=="Tetrahedron")
            sum=sum+4;
       if(s[i]=="Cube")
            sum=sum+6;
            if(s[i]=="Octahedron")
            sum=sum+8;
            if(s[i]=="Dodecahedron")
            sum=sum+12;
            if(s[i]=="Icosahedron")
            sum=sum+20;
    }
cout<<sum<<endl;
}
