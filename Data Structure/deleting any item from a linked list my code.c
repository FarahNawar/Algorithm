#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
typedef struct node NODE;
NODE *start,*item,*avail;
void create(NODE *ptr)
{
    scanf("%d",&ptr->info);
    if(ptr->info==-999)
        ptr->link=0;
    else
    {
        ptr->link=(NODE *)malloc(sizeof(NODE));
        create(ptr->link);
    }
}
void deletion(NODE *ptr)
{
    if(start->info==item->info)
        start=start->link;
    else if(ptr->link->info==item->info)
        ptr->link=ptr->link->link;
    else
        deletion(ptr->link);
}
void display(NODE *ptr)
{
    if(ptr->link!=0)
    {
        printf("%3d",ptr->info);
        display(ptr->link);
    }
}
int main()
{
    start=(NODE *)malloc(sizeof(NODE));
    printf("Enter items :....Enter =-999 at last:....\n");
    create(start);
    item=(NODE *)malloc(sizeof(NODE));
    printf("Enter item u want to delete:.....");
    scanf("%d",&item->info);
    deletion(start);
    display(start);
    return 0;
}

