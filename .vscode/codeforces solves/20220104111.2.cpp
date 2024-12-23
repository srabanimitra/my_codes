#include<bits/stdc++.h>
using namespace std;
string postfixToPrefix(string postfix)
{
    stack<string>s;
    string infix= "";
    int i=0;
    for(i=0;i<postfix.size();i++)
    {
        if(postfix[i]>='a'&&postfix[i]<='z'||postfix[i]>='A'&&postfix[i]<='Z'||postfix[i]>='0'&&postfix[i]<='9')
        {
            string str(1,postfix[i]);
             s.push(str);
        }
        else
        {
            string s1 = s.top();
            s.pop();
            string s2 = s.top();
            s.pop();
            s.push(postfix[i]+s2+s1);
        }
    }
        return s.top();
}
int evaluatePrefix(string prefix)
{
    stack<int>s;
    int l = prefix.length();
    for(int i=l-1;i>=0;i--)
    {
        if(prefix[i]==' ')continue;
        else if (prefix[i]>='0'&& prefix[i]<='9')
        {
            s.push(prefix[i]-'0');
        }
        else
        {
            int a=s.top();
            s.pop();
            int b =s.top();
            s.pop();
            switch(prefix[i])
            {
            case '^':
                s.push(pow(a,b));
                break;
            case '*':
                s.push(a*b);
                break;
            case '/':
                s.push(a/b);
                break;
            case '+':
                s.push(a+b);
                break;
            case '-':
                s.push(a-b);
                break;
            }
        }
    }
    return s.top();
}
int main()
{
    string postfix,prefix;
    cout<<"Enter the postfix expression : ";
    getline(cin,postfix);
    cout<<"The prefix expression is : ";
    prefix=postfixToPrefix(postfix);
    cout<<prefix<<endl;

    int ans=evaluatePrefix(prefix);
    cout<<"The evaluation is : ";
    cout<<ans;

    return 0;
}
