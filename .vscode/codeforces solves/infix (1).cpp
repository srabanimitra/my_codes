#include<bits/stdc++.h>
using namespace std;
stack<char>s;
int priority(char ch)
{
    if(ch=='^')
        return 100;
    else if(ch=='*' || ch=='/')
        return 50;
    else if(ch=='+' || ch=='-')
        return 10;
    else
        return 0;
}
int main()
{
    string infix,postfix="";
    getline(cin,infix);
    for(int i=0; i<infix.size(); i++)
    {
        char symbol=infix[i];
        // cout<<symbol<<endl;
        if(symbol>='0' && symbol<='9')
        {
            postfix=postfix+symbol;
            cout<<postfix<<endl;
        }
        else if(symbol=='(')
        {
            s.push(symbol);
        }
        else if(symbol==')')
        {
            while(!s.empty() && s.top()!='(')
            {
                postfix=postfix+s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
         while(!s.empty() && (priority(s.top())>= priority(symbol) ) ){
            postfix=postfix+s.top();
            s.pop();
         }
         s.push(symbol);
        }
    }
     while(!s.empty())
{
    postfix=postfix+s.top();
    s.pop();
}
cout<<postfix<<endl;
}
//5+6/2*(8+4)-7
