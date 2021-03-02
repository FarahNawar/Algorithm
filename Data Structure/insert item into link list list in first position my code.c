
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
typedef struct node NODE;
NODE *start;
NODE *item;
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
void insert(NODE *ptr)
{
    scanf("%d",&ptr->info);
    ptr->link=start;
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
    printf("Enter items u want : ......Enter -999 as a last :......\n");
    create(start);
    printf("Enter item which u want to insert first :\n");
    item =(NODE *)malloc(sizeof(NODE));
    insert(item);
    display(item);
    return 0;
}
