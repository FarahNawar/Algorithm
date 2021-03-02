#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
typedef struct node NODE;
int cnt=0,pos;
NODE *start;
NODE *item;
NODE *avail;
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
    if(cnt==pos && cnt==0)
    {
        item->link=start;
        start=item;
    }
    else if(cnt==pos-1)
    {
        avail=ptr->link;
        ptr->link=item;
        item->link=avail;
    }
    else
    {
        cnt++;
        insert(ptr->link);
    }
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
    printf("In which position u want to insert :...  ");
    scanf("%d",&pos);
    printf("Enter item which u want to insert :\n");
    item =(NODE *)malloc(sizeof(NODE));
    scanf("%d",&item->info);
    insert(start);
    display(start);
    return 0;
}
