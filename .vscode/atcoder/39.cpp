
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    string str="hello";
    cout<<str[0]<<endl;
    str[0]='v';
    cout<<str<<endl;
    cout<<str.size()<<endl;
    for(int i=0;i<str.size();++i)
    {
        cout<<str[i]<<endl;
    }
    string str1,str2;
    cin>>str1>>str2;
    string str3=str1+" "+str2;
    cout<<str3<<endl;
    getch();

}
