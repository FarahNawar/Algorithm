#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
int prec(char c);
void infixToPostfix();
int precedence(char c);
string exp;
string postfix;
int main()
{
    exp="a+(b*c)";
    reverse(exp.begin(),exp.end());
    infixToPostfix();
    cout << postfix << endl;
}
void infixToPostfix()
{
    stack<char> mystack;
    mystack.push('N');
    for(int i = 0; i < exp.length(); i++)
    {
        if((exp[i] >= 'a' && exp[i] <= 'z')||(exp[i] >= 'A' && exp[i] <= 'Z'))
        postfix+=exp[i];
        else if(exp[i] == '(')
        mystack.push('(');
        else if(exp[i] == ')')
        {
            while(mystack.top() != 'N' && mystack.top() != '(')
            {
                char c = mystack.top();
                mystack.pop();
               postfix += c;
            }
            if(mystack.top() == '(')
            {
                char c = mystack.top();
                mystack.pop();
            }
        }
        else{
            while(mystack.top() != 'N' && precedence(exp[i]) <= precedence(mystack.top()))
            {
                char c = mystack.top();
                mystack.pop();
                postfix += c;
            }
            mystack.push(exp[i]);
        }

    }
    while(mystack.top() != 'N')
    {
        char c = mystack.top();
        mystack.pop();
        postfix += c;
    }
}
int precedence(char c)
{
    if(c == '^')
    return 3;
    else if(c == '*' || c == '/')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}


