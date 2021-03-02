#include<stdio.h>
int info[20],link[20],start;
int search (int);
int main()
{
    int ptr,loc,item;
    info[2]=100;info[5]=10;info[8]=20;
    link[5]=8;link[8]=2;link[2]=-1;
    start=5;
    ptr=start;
    printf("list:\n");
    while(ptr!=-1)
    {
        printf("%d\t",info[ptr]);
        ptr=link[ptr];
    }
    printf("enter the item to be selected: \n");
    scanf("%d",&item);
    loc=search(item);
    if(loc==-1)
        printf("item is not present in the list");
        else
            printf("item %d is present at the index %d in the list",item,loc);
}
int search(int i)
{
    int p=start;
    int l=-1;
    while(p!=-1)
    {
        if(i==info[p])
        {
            l=p;
            break;
        }
        else
        {
            p=link[p];
        }
    }
    return(l);
}
