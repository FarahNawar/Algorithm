#include<stdio.h>
#include<stdlib.h>
struct node
{
    int number;
    struct node *link;
};
typedef struct node NODE;
NODE *item, *avail;
NODE *start;
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
    if(ptr->number>=item->number)
    {
        item->link=start;
        start=item;
    }
    else if(ptr->link->number->=item->number)
    {
        avail=ptr->link;
        ptr->link=item;
        item->link=avail;
    }
    else
        insert(ptr->link);
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
    printf("Enter items :.... PLZ enter -999 at last:....\n");
    create(start);
    printf("Enter the item u want to insert :........");
    item=(NODE *)malloc(sizeof(NODE));
    scanf("%d",&item->number);
    insert(start);
    display(start);
    return 0;
}
