#include<bits/stdc++.h>
using namespace std;
stack<char>s;
stack<int>r;
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
void evaluate( string postfix)
{
    for(int i=0; i<postfix.size(); i++)
    {
        char symbol=postfix[i];
        if(symbol>='0' && symbol<='9')
        {
            r.push(symbol-'0');
        }
        else
        {
            int a=r.top();
            r.pop();
            int b=r.top();
            r.pop();
            int c=0;
            if(symbol=='*')
                c=b*a;
            else if(symbol=='/')
                c=b/a;
            else if(symbol=='+')
                c=b+a;
            else if(symbol=='-')
                c=b-a;
            else if(symbol=='^')
                c=pow(b,a);
            r.push(c);
        }

    }
    cout<<r.top()<<endl;
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
            while(!s.empty() && (priority(s.top())>= priority(symbol) ) )
            {
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
    evaluate(postfix);


}
//5+6/2*(8+4)-7
