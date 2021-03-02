#include<stdio.h>
//#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
typedef struct node NODE;
NODE *start,*avail;
int cnt=0,pos;
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
    if(pos==0)
        start=start->link;
    else if(cnt==pos-1 && pos!=0)
        ptr->link=ptr->link->link;
    else
    {
        cnt++;
        deletion(ptr->link);
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
    printf("Enter items :....Enter =-999 at last:....\n");
    create(start);
    printf("Enter pos from which u want to delete:.....");
    scanf("%d",&pos);
    deletion(start);
    display(start);
    return 0;
}


