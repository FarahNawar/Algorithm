#include<stdio.h>
#include<stdlib.h>
struct node
{
    int number;
    struct node *link;
};
typedef struct node NODE;
void create(NODE *ptr)
{
    printf("Enter an integer :...Enter -999 as a last integer :.....:");
    scanf("%d",&ptr->number);
    if(ptr->number==-999)
        ptr->link=0;
    else
    {
        ptr->link=(NODE *)malloc(sizeof(NODE));
        create(ptr->link);
    }
}
void display(NODE *ptr)
{
    if(ptr->link!=0)
    {
        if(ptr->link->number!=-999)
        {
            printf("%3d--->>",ptr->number*10);
            display(ptr->link);
        }
        else
             printf("%3d",ptr->number*10);
    }
}
int main()
{
    NODE *start;
    start=(NODE *)malloc(sizeof(NODE));
    create(start);
    display(start);
    return 0;
}
///using many information
/*
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int number;
    char name[40];
    char phone[20];
    struct node *link;
};
typedef struct node NODE;
void create(NODE *ptr)
{
    printf("Enter an integer :...Enter -999 as a last integer :.....:");
    scanf("%d",&ptr->number);
    if(ptr->number==-999)
        ptr->link=0;
    else
    {
        getchar();
        gets(ptr->name);
        scanf("%s",&ptr->phone);
        ptr->link=(NODE *)malloc(sizeof(NODE));
        create(ptr->link);
    }
}
void display(NODE *ptr)
{
    if(ptr->link!=0)
    {
        printf("%d\n",ptr->number);
        puts(ptr->name);
        printf("%s\n\n",ptr->phone);
        display(ptr->link);
    }
}
int main()
{
    NODE *start;
    start=(NODE *)malloc(sizeof(NODE));
    create(start);
    display(start);
    return 0;
}
*/
