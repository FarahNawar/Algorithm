#include<stdio.h>
#define MAX 30
struct stack
{
    int data[MAX];
    int top;
} stack;
void push(struct stack *s,int x);
int pop(struct stack *s);
int evaluate(char x,int op1,int op2);
void init(struct stack *s);
int main()
{
    char x;
    struct stack s;
    int val,op2,op1;
    init(&s);
    printf("enter the postfix expression:\n");
    while((x=getchar())!='\n')
    {
        if(isdigit(x))
            push(&s,x-48);
        else
        {
            op2=pop(&s);
            op1=pop(&s);
            val=evaluate(x,op1,op2);
            push(&s,val);
        }
    }
    val=pop(&s);
    printf("the value of the postfix expression is :  %d\n",val);
}
void init(struct stack *s)
{
    s->top=-1;
}
int evaluate(char x,int op1,int op2)
{
    if(x=='+')
        return (op1+op2);
    if(x=='-')
        return (op1-op2);
    if(x=='*')
        return (op1*op2);
    if(x=='/')
        return (op1/op2);
    if(x=='%')
        return (op1%op2);
}
void push(struct stack *s,int x)
{
    s->top=s->top+1;
    s->data[s->top]=x;
}
int pop(struct stack *s)
{
    int x;
    x=s->data[s->top];
    s->top=s->top-1;
    return(x);
}
