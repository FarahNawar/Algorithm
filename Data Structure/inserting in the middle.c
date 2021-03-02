#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
};
void print(struct node *ptr);
void insert(struct node *prev_node,int new_data);
int main()
{
    struct node *head=NULL;
    struct node *second=NULL;
    struct node *third=NULL;
    struct node *ptr;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    insert(second,400);
    print(head);

}
void print(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf(" %d ",ptr->data);
        ptr=ptr->next;
    }
}
void insert(struct node *prev_node,int new_data)
{
        struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
}
