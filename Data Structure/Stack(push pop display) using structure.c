#include<stdio.h>
struct stack
{
    int top;
    int data[100];
};
typedef struct stack stack;
void init(stack *s);
int pop(stack *s);
void push(stack *s,int x);
void display(stack *s);
void init(stack *s)
{
    s->top=-1;
}
void push(stack *s,int x)
{
    s->top=s->top+1;
    s->data[s->top]=x;
}
int pop(stack *s)
{
    int x;
    x=s->data[s->top];
    s->top=s->top-1;
    return x;
}
void main ()
{
    int choice,x;
    int option = 1;
    stack s;
    init(&s);

    printf ("STACK OPERATION\n");
    while (option)
    {
        printf ("------------------------------------------\n");
        printf ("      1    -->    PUSH               \n");
        printf ("      2    -->    POP               \n");
        printf ("      3    -->    DISPLAY               \n");
        printf ("      4    -->    EXIT           \n");
        printf ("------------------------------------------\n");

        printf ("Enter your choice\n");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nenter the data you want o push:\t");
            scanf("%d",&x);
            push(&s,x);
            printf("\n%d is succesfully pushed onto the stack\n\n");
            break;
        case 2:
            x=pop(&s);
            printf("%d is successfully poped from the stack\n\n",x);
            break;
        case 3:
            display(&s);
            break;
        case 4:
            return;
        }
        fflush (stdin);
        printf ("Do you want to continue(Type 0 or 1)?\n");
        scanf    ("%d", &option);
    }
}
void display(stack *s)
{
    int i;
    if(s->top==-1)
    {
        printf("the stack is empty\n");
        return;
    }
    else
    {
        printf("the current status of the stack is:\n");
        for(i=s->top;i>=0;i--)
        {
            printf("%d\n",s->data[i]);
        }
       printf("\n");
    }

}

