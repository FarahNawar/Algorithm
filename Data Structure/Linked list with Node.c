#include<stdio.h>
#include<stdlib.h>
struct node
{
    int number;
    struct node *link;
};
typedef struct node NODE;
int count=0;
NODE *item,*start;
void create(NODE *ptr)
{
    scanf("%d",&ptr->number);
    if(ptr->number==-999)
        ptr->link=0;
    else
    {
        ptr->link=(NODE *)malloc(sizeof(NODE));
        create(ptr->link);
    }
}
void insert(NODE *ptr)
{
    item->link=start;
    start=item;
}
void display(NODE *ptr)
{
    if(ptr->link!=0)
    {
        printf("%3d",ptr->number);
        display(ptr->link);
    }
}
int main()
{
    start=(NODE *)malloc(sizeof(NODE));
    printf("Enter your items in linked list : .. enter -999 as last.....");
    create(start);
    item=(NODE *)malloc(sizeof(NODE));
    printf("Enter your desired item which you want to insert first:..");
    scanf("%d",&item->number);
    insert(item);
    display(item);
    return 0;
}
