#include<bits/stdc++.h>
using namespace std;
stack<int>s,s1;

int main(){
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        s.push(x);

    }

 while(!s.empty()){
        s1.push(s.top());
        s.pop();
    }
    while(!s1.empty()){
        cout<<s1.top()<<endl;
        s1.pop();
    }
}
