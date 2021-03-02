#include<iostream>
#include<stack>
using namespace std;
stack<char>mystack;
string postfix;
string exp;
void InfixToPostfix();
int main()
{
    cout<<"Enter infix expression :"<<endl;
    cin>>exp;
}
void InfixToPostfix()
{
    int i=0;
    mystack.push('E');
    while(exp[i]!='\0')
    {
        if((exp[i]>='a'&&exp[i]<='z')||(exp[i]>='A'&&exp[i]<='Z'))
        {
            postfix[i]+=exp[i];
        }
        else if()
        {
            if(precedence(exp[i]))
        }
    }

}
int precedence(char x)
{
    if(x=='/') return 3;
    if(x=='*')return 2;
    if(x=='+'||x=='-')return 1;
}
