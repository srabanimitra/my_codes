#include<bits/stdc++.h>
using namespace std;
void fun(int a[][30])
{
    a[0][0]=7;
}
int main(){
    int a[20][30];
    a[0][0]=5;
    cout<<a[0][0]<<endl;
    fun(a);
    cout<<a[0][0]<<endl;
}
