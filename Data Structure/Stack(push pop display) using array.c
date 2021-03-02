#include<stdio.h>
#include<stdlib.h>
#define MAX 40
int top=-1,stack[MAX];
void push();
void pop();
void display();
void main()
{
    int n;
    while(2)
    {
        printf("\nStack Menu      \n");
        printf("**************\n");
        printf("*  1.Push    *\n*  2.Pop     *\n*  3.Display *\n*  4.Exit    *\n");
        printf("**************\n\n");
        printf("Enter your choice:\t");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nWrong choice!\n");
        }
    }
}
void push()
{
    int value;
    if(top==MAX-1)
        printf("the stack is full.\n");
     else
     {
         printf("Enter the element to be inserted:\t");
         scanf("%d",&value);
         top++;
         stack[top]=value;
     }
}
void pop()
{
    if(top==-1)
        printf("the stack is empty.\n");
    else
    {
        printf("%d is deleted from the stack.\n",stack[top]);
        top--;
    }
}
void display()
{
    int i;
    if(top==-1)
        printf("the stack is empty\n");
    else
    {
        printf("the stack is :     \n");
        for(i=top;i>=0;i--)
            printf("  %d     \n",stack[i]);
    }
}

