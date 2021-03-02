#include<stdio.h>
struct node
{
    void *datapntr;
    struct node *link;
};
typedef struct node stack_node;
struct stack
{
    int count;
    stack_node *top;
};
typedef struct stack stack;
stack* createstack(void)
{
    stack *newstack;
    newstack=(stack*)malloc(sizeof(stack));
    if(newstack)
    {
        newstack->count=0;
        newstack->top=NULL;
    }
    return newstack;
}
int pushstack(stack *newstack,void *datainpntr)
{
    stack_node *newpntr;
    newpntr=(stack_node*)malloc(sizeof(stack_node));
    if(!newpntr)
        return 0;
    newpntr->datapntr=datainpntr;
    newpntr->link=newstack->top;
    newstack->top=newpntr;
    (newstack->count)++;
    return 1;
}

int main()
{
    int data;
    stack *newstack;
    newstack=createstack();
    scanf("%d",&data);
    pushstack(newstack,&data);

}

