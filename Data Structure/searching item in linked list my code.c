#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
int item,cnt=0;
typedef struct node NODE;
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
void check(NODE *ptr)
{
    if(ptr->info==-999)
        printf("Item is not found\n");
    else if(ptr->info==item)
        printf("Item is Found. Location is %d",cnt);
    else
    {
        cnt++;
        check(ptr->link);
    }
}
int main()
{
    NODE *start;
    start = (NODE *)malloc(sizeof(NODE));
    printf("Enter data in your list.... enter -999 at the last :\n");
    create(start);
    printf("Enter your desired item :");
    scanf("%d",&item);
    check(start);
    return 0;
}

