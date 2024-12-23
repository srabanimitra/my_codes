
#include<bits/stdc++.h>
using namespace std;
int main()
{
queue<string> s;
s.push("abc");
s.push("dkj");
s.push("xjc");
s.push("tyytu");
while(!s.empty()){
    cout<<s.front()<<endl;
    s.pop();
}
}
